/* GoogleTest */
#include <gtest/gtest.h>

/* AMD RDNA3 */
#include "AMD-RDNA3/instructions/SOP2.h"

TEST(SOP2Test, S_ADD_U32) {
    uint32_t instruction = SOP2(S_ADD_U32, 0x00, 0x00, 0x00);
    EXPECT_EQ(instruction, 0b10000000000000000000000000000000);

    instruction = SOP2(S_ADD_U32, 0x01, 0x00, 0x00);
    EXPECT_EQ(instruction, 0b10000000000000000000000000000001);

    instruction = SOP2(S_ADD_U32, 0x00, 0x01, 0x00);
    EXPECT_EQ(instruction, 0b10000000000000000000000100000000);

    instruction = SOP2(S_ADD_U32, 0x00, 0x00, 0x01);
    EXPECT_EQ(instruction, 0b10000000000000010000000000000000);
}
