/* C */
#include <stdint.h>

/* GoogleTest */
#include <gtest/gtest.h>

/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOP2.h"

TEST(SOP2Test, S_ADD_U32) {
    uint32_t instruction = 0x00000000;

    for (uint16_t SDST = 0; SDST <= 127; SDST++)
    for (uint16_t SSRC1 = 0; SSRC1 <= 255; SSRC1++)
    for (uint16_t SSRC0 = 0; SSRC0 <= 255; SSRC0++) {
        instruction = SOP2(S_ADD_U32, SDST, SSRC1, SSRC0);
        /* TODO */
    }
}
