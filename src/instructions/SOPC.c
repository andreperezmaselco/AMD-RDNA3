/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOPC.h"

uint32_t SOPC(const uint8_t OP,
              const uint8_t SSRC0,
              const uint8_t SSRC1) {
    const struct {
        uint8_t SSRC0;
        uint8_t SSRC1;
        uint8_t OP : 7;
        uint16_t ENCODING : 9;
    } instruction = {SSRC0, SSRC1, OP, 0b101111110};

    return *(uint32_t *)&instruction;
}
