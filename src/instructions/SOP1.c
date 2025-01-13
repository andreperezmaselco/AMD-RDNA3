/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOP1.h"

uint32_t SOP1(const uint8_t OP,
              const uint8_t SSRC0,
              const uint8_t SDST) {
    uint32_t instruction = (uint32_t)SSRC0;
    instruction |= (uint32_t)SDST        << 8;
    instruction |= (uint32_t)OP          << 16;
    instruction |= (uint32_t)0b101111101 << 23; /* ENCODING */
    return instruction;
}
