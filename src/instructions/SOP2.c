/* C */
#include <stdint.h>

/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOP2.h"

uint32_t SOP2(const uint8_t SSRC0,
              const uint8_t SSRC1,
              const uint8_t SDST,
              const uint8_t OP) {
    const struct SOP2 instruction = {SSRC0, SSRC1, SDST, OP, /* ENCODING */ 0b10};
    return *(uint32_t *)&instruction;
}
