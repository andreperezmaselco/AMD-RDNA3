/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/VOP2.h"

uint32_t VOP2(const uint8_t OP,
              const uint8_t VDST,
              const uint8_t VSRC1,
              const uint16_t SRC0) {
    uint32_t instruction = (uint32_t)SRC0;
    instruction |= (uint32_t)VSRC1 << 9;
    instruction |= (uint32_t)VDST  << 17;
    instruction |= (uint32_t)OP    << 25;
    return instruction;
}
