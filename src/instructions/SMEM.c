/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SMEM.h"

uint64_t SMEM(void) {
    const struct {
        uint8_t SBASE : 6;
        uint8_t SDATA : 7;
        uint8_t DLC : 1;
        uint8_t GLC : 1;
        uint8_t : 3;
        uint8_t OP;
        uint8_t ENCODING : 6; /* 0b111101 */
        uint32_t OFFSET : 21;
        uint8_t : 4;
        uint8_t SOFFSET : 7;
    } instruction;

    return *(uint64_t *)&instruction;
}
