/* GoogleTest */
#include <gtest/gtest.h>

/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOP2.h"

TEST(SOP2Test, S_ADD_U32) {
    const uint32_t instruction = SOP2(S_ADD_U32, 0x00, 0x00, 0x00);

    /* TODO */
}
