/* C */
#include <stdint.h>

/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOP1.h"

uint32_t SOP1(const uint8_t SSRC0,
              const uint8_t OP,
              const uint8_t SDST) {
    const struct SOP1 instruction = {SSRC0, OP, SDST, /* ENCODING */ 0b101111101};
    return *(uint32_t *)&instruction;
}
