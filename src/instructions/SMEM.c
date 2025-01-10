/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SMEM.h"

uint64_t SMEM(const uint8_t SBASE,
              const uint8_t SDATA,
              const uint8_t DLC,
              const uint8_t GLC,
              const uint8_t OP,
              const uint32_t OFFSET,
              const uint8_t SOFFSET) {
    uint64_t instruction = (uint64_t)SBASE;
    instruction |= (uint64_t)SDATA    << 6;
    instruction |= (uint64_t)DLC      << 14;
    instruction |= (uint64_t)GLC      << 16;
    instruction |= (uint64_t)OP       << 18;
    instruction |= (uint64_t)0b111101 << 26; /* ENCODING */
    instruction |= (uint64_t)OFFSET   << 32;
    instruction |= (uint64_t)SOFFSET  << 57;
    return instruction;
}
