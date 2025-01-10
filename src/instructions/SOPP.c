/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOPP.h"

uint32_t SOPP(const uint8_t OP, const uint16_t SIMM16) {
    uint32_t instruction = (uint32_t)SIMM16;
    instruction |= OP          << 16;
    instruction |= 0b101111111 << 23; /* ENCODING */
    return instruction;
}
