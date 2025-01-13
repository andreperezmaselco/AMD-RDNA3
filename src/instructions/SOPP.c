/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOPP.h"

uint32_t SOPP(const uint8_t OP, const uint16_t SIMM16) {
    uint32_t instruction = (uint32_t)SIMM16;
    instruction |= (uint32_t)OP          << 16;
    instruction |= (uint32_t)0b101111111 << 23; /* ENCODING */
    return instruction;
}
