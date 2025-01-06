/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/VOP2.h"

uint32_t VOP2(const uint8_t OP,
              const uint16_t SRC0,
              const uint8_t VSRC1,
              const uint8_t VDST) {
    uint32_t instruction = 0x00000000;
    instruction |= SRC0;
    instruction |= VSRC1 << 9;
    instruction |= VDST  << 17;
    instruction |= OP    << 25;
    instruction |= 0b0   << 31;
    return instruction;
}
