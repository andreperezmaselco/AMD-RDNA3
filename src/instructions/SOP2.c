/* C */
#include <stdint.h>

/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOP2.h"

uint32_t SOP2(const uint8_t OP,
              const uint8_t SSRC0,
              const uint8_t SSRC1,
              const uint8_t SDST) {
    const struct {
        uint8_t SSRC0;
        uint8_t SSRC1;
        uint8_t SDST : 7;
        uint8_t OP : 7;
        uint8_t ENCODING : 2;
    } instruction = {SSRC0, SSRC1, SDST, OP, 0b10};

    return *(uint32_t *)&instruction;
}
