/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOPP.h"

uint32_t SOPP(const uint8_t OP, const uint16_t SIMM16) {
    const struct {
        uint16_t SIMM16;
        uint8_t OP : 7;
        uint16_t ENCODING : 9;
    } instruction = {SIMM16, OP, 0b101111111};

    return *(uint32_t *)&instruction;
}
