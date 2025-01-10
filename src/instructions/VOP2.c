/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/VOP2.h"

uint32_t VOP2(const uint8_t OP,
              const uint8_t VDST,
              const uint8_t VSRC1,
              const uint16_t SRC0) {
    uint32_t instruction = (uint32_t)SRC0;
    instruction |= VSRC1 << 9;
    instruction |= VDST  << 17;
    instruction |= OP    << 25;
    return instruction;
}
