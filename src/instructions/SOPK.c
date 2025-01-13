/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOPK.h"

uint32_t SOPK(const uint8_t OP,
              const uint16_t SIMM16,
              const uint8_t SDST) {
    uint32_t instruction = (uint32_t)SIMM16;
    instruction |= (uint32_t)SDST   << 16;
    instruction |= (uint32_t)OP     << 23;
    instruction |= (uint32_t)0b1011 << 28; /* ENCODING */
    return instruction;
}
