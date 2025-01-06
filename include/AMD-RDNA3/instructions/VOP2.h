#ifndef AMD_RDNA3_INSTRUCTIONS_VOP2_H
#define AMD_RDNA3_INSTRUCTIONS_VOP2_H

/* C */
#include <stdint.h>

enum {
    V_CNDMASK_B32 = 1,
    V_DOT2ACC_F32_F16 = 2,
    V_ADD_F32 = 3,
    V_SUB_F32 = 4,
    V_SUBREV_F32 = 5,
    V_FMAC_DX9_ZERO_F32 = 6,
    V_MUL_DX9_ZERO_F32 = 7,
    V_MUL_F32 = 8,
    V_MUL_I32_I24 = 9,
    V_MUL_HI_I32_I24 = 10,
    V_MUL_U32_U24 = 11,
    V_MUL_HI_U32_U24 = 12,
    V_MIN_F32 = 15,
    V_MAX_F32 = 16,
    V_MIN_I32 = 17,
    V_MAX_I32 = 18,
    V_MIN_U32 = 19,
    V_MAX_U32 = 20,
    V_LSHLREV_B32 = 24,
    V_LSHRREV_B32 = 25,
    V_ASHRREV_I32 = 26,
    V_AND_B32 = 27,
    V_OR_B32 = 28,
    V_XOR_B32 = 29,
    V_XNOR_B32 = 30,
    V_ADD_CO_CI_U32 = 32,
    V_SUB_CO_CI_U32 = 33,
    V_SUBREV_CO_CI_U32 = 34,
    V_ADD_NC_U32 = 37,
    V_SUB_NC_U32 = 38,
    V_SUBREV_NC_U32 = 39,
    V_FMAC_F32 = 43,
    V_FMAMK_F32 = 44,
    V_FMAAK_F32 = 45,
    V_CVT_PK_RTZ_F16_F32 = 47,
    V_ADD_F16 = 50,
    V_SUB_F16 = 51,
    V_SUBREV_F16 = 52,
    V_MUL_F16 = 53,
    V_FMAC_F16 = 54,
    V_FMAMK_F16 = 55,
    V_FMAAK_F16 = 56,
    V_MAX_F16 = 57,
    V_MIN_F16 = 58,
    V_LDEXP_F16 = 59,
    V_PK_FMAC_F16 = 60
};

uint32_t VOP2(const uint8_t OP,
              const uint16_t SRC0,
              const uint8_t VSRC1,
              const uint8_t VDST);

#endif
