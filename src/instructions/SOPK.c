/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOPK.h"

uint32_t SOPK(const uint8_t OP,
              const uint16_t SIMM16,
              const uint8_t SDST) {
    uint32_t instruction = 0x00000000;
    instruction |= SIMM16;
    instruction |= SDST   << 16;
    instruction |= OP     << 23;
    instruction |= 0b1011 << 28;
    return instruction;
}
