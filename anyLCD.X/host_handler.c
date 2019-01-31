#include "mcc_generated_files/mcc.h"
#include "host_handler.h"
#include "framebuffer.h"

static uint8_t in_x;
static uint8_t in_y;

static volatile union {
    uint8_t asByte[6];

    struct {
        uint8_t cmd_setColumn; //0x21; //set column
        uint8_t x; //start = col
        uint8_t colMax; //0x7F;    // end = col max
        uint8_t cmd_setRow; //0x22;    // set row
        uint8_t y; // start = row
        uint8_t rowMax; //0x07; // end = row max
    };
} in_commandBuffer;

uint8_t in_gotSPIchar(uint8_t dataByte) {
    if (IO_isData_GetValue()) {
        //Data coming in
        if (in_x >= 128) {
            ++in_y;
            in_x = 0;
        };
        if (in_y >= (64 / 8)) {
            in_y = 0;
        };
        fb_LCDframeBuffer[in_y][in_x++] = dataByte;
    } else {
        //Command coming in
        in_commandBuffer.asByte[5] = in_commandBuffer.asByte[4];
        in_commandBuffer.asByte[4] = in_commandBuffer.asByte[3];
        in_commandBuffer.asByte[3] = in_commandBuffer.asByte[2];
        in_commandBuffer.asByte[2] = in_commandBuffer.asByte[1];
        in_commandBuffer.asByte[1] = in_commandBuffer.asByte[0];
        in_commandBuffer.asByte[0] = dataByte;
    }
    return 0; //Output 0 after receving byte
}

void in_executeCommand(void) {
    if ((in_commandBuffer.cmd_setColumn == 0x21) &&
            (in_commandBuffer.colMax == 0x7F) &&
            (in_commandBuffer.cmd_setRow == 0x22) &&
            (in_commandBuffer.rowMax == 0x07)) {
        in_x = in_commandBuffer.x;
        in_y = in_commandBuffer.y;
    }
    //Clear command buffer
    in_commandBuffer.asByte[0] = 0;
}