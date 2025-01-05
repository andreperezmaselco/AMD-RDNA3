#ifndef AMD_RDNA3_INSTRUCTIONS_SOPC_H
#define AMD_RDNA3_INSTRUCTIONS_SOPC_H

/* C */
#include <stdint.h>

enum {
    S_CMP_EQ_I32 = 0,
    S_CMP_LG_I32 = 1,
    S_CMP_GT_I32 = 2,
    S_CMP_GE_I32 = 3,
    S_CMP_LT_I32 = 4,
    S_CMP_LE_I32 = 5,
    S_CMP_EQ_U32 = 6,
    S_CMP_LG_U32 = 7,
    S_CMP_GT_U32 = 8,
    S_CMP_GE_U32 = 9,
    S_CMP_LT_U32 = 10,
    S_CMP_LE_U32 = 11,
    S_BITCMP0_B32 = 12,
    S_BITCMP1_B32 = 13,
    S_BITCMP0_B64 = 14,
    S_BITCMP1_B64 = 15,
    S_CMP_EQ_U64 = 16,
    S_CMP_LG_U64 = 17
};

uint32_t SOPC(const uint8_t OP,
              const uint8_t SSRC0,
              const uint8_t SSRC1);

#endif
