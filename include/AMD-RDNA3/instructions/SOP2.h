#ifndef AMD_RDNA3_INSTRUCTIONS_SOP2_H
#define AMD_RDNA3_INSTRUCTIONS_SOP2_H

/* C */
#include <stdint.h>

enum {
    S_ADD_U32 = 0,
    S_SUB_U32 = 1,
    S_ADD_I32 = 2,
    S_SUB_I32 = 3,
    S_ADDC_U32 = 4,
    S_SUBB_U32 = 5,
    S_ABSDIFF_I32 = 6,
    S_LSHL_B32 = 8,
    S_LSHL_B64 = 9,
    S_LSHR_B32 = 10,
    S_LSHR_B64 = 11,
    S_ASHR_I32 = 12,
    S_ASHR_I64 = 13,
    S_LSHL1_ADD_U32 = 14,
    S_LSHL2_ADD_U32 = 15,
    S_LSHL3_ADD_U32 = 16,
    S_LSHL4_ADD_U32 = 17,
    S_MIN_I32 = 18,
    S_MIN_U32 = 19,
    S_MAX_I32 = 20,
    S_MAX_U32 = 21,
    S_AND_B32 = 22,
    S_AND_B64 = 23,
    S_OR_B32 = 24,
    S_OR_B64 = 25,
    S_XOR_B32 = 26,
    S_XOR_B64 = 27,
    S_NAND_B32 = 28,
    S_NAND_B64 = 29,
    S_NOR_B32 = 30,
    S_NOR_B64 = 31,
    S_XNOR_B32 = 32,
    S_XNOR_B64 = 33,
    S_AND_NOT1_B32 = 34,
    S_AND_NOT1_B64 = 35,
    S_OR_NOT1_B32 = 36,
    S_OR_NOT1_B64 = 37,
    S_BFE_U32 = 38,
    S_BFE_I32 = 39,
    S_BFE_U64 = 40,
    S_BFE_I64 = 41,
    S_BFM_B32 = 42,
    S_BFM_B64 = 43,
    S_MUL_I32 = 44,
    S_MUL_HI_U32 = 45,
    S_MUL_HI_I32 = 46,
    S_CSELECT_B32 = 48,
    S_CSELECT_B64 = 49,
    S_PACK_LL_B32_B16 = 50,
    S_PACK_LH_B32_B16 = 51,
    S_PACK_HH_B32_B16 = 52,
    S_PACK_HL_B32_B16 = 53
};

#ifdef __cplusplus
extern "C"
#endif
uint32_t SOP2(const uint8_t OP,
              const uint8_t SDST,
              const uint8_t SSRC1,
              const uint8_t SSRC0);

#endif
