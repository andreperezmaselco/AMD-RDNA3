/* C */
#include <stdint.h>

/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOPK.h"

uint32_t SOPK(const uint8_t SIMM16,
              const uint8_t SDST,
              const uint8_t OP) {
    const struct SOPK instruction = {SIMM16, SDST, OP, /* ENCODING */ 0b1011};
    return *(uint32_t *)&instruction;
}
