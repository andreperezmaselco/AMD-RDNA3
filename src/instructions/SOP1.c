/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOP1.h"

uint32_t SOP1(const uint8_t OP,
              const uint8_t SSRC0,
              const uint8_t SDST) {
    const struct {
        uint8_t SSRC0;
        uint8_t OP;
        uint8_t SDST : 7;
        uint16_t ENCODING : 9;
    } instruction = {SSRC0, OP, SDST, 0b101111101};

    return *(uint32_t *)&instruction;
}
