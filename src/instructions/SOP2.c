/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOP2.h"

uint32_t SOP2(const uint8_t OP,
              const uint8_t SDST,
              const uint8_t SSRC1,
              const uint8_t SSRC0) {
    uint32_t instruction = (uint32_t)SSRC0;
    instruction |= (uint32_t)SSRC1 << 8;
    instruction |= (uint32_t)SDST  << 16;
    instruction |= (uint32_t)OP    << 23;
    instruction |= (uint32_t)0b10  << 30; /* ENCODING */
    return instruction;
}
