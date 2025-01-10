/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOPC.h"

uint32_t SOPC(const uint8_t OP,
              const uint8_t SSRC0,
              const uint8_t SSRC1) {
    uint32_t instruction = (uint32_t)SSRC0;
    instruction |= SSRC1       << 8;
    instruction |= OP          << 16;
    instruction |= 0b101111110 << 23; /* ENCODING */
    return instruction;
}
