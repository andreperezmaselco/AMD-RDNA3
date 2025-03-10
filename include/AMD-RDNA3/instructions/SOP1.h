#ifndef AMD_RDNA3_INSTRUCTIONS_SOP1_H
#define AMD_RDNA3_INSTRUCTIONS_SOP1_H

/* C */
#include <stdint.h>

enum {
    S_MOV_B32 = 0,
    S_MOV_B64 = 1,
    S_CMOV_B32 = 2,
    S_CMOV_B64 = 3,
    S_BREV_B32 = 4,
    S_BREV_B64 = 5,
    S_CTZ_I32_B32 = 8,
    S_CTZ_I32_B64 = 9,
    S_CLZ_I32_U32 = 10,
    S_CLZ_I32_U64 = 11,
    S_CLS_I32 = 12,
    S_CLS_I32_I64 = 13,
    S_SEXT_I32_I8 = 14,
    S_SEXT_I32_I16 = 15,
    S_BITSET0_B32 = 16,
    S_BITSET0_B64 = 17,
    S_BITSET1_B32 = 18,
    S_BITSET1_B64 = 19,
    S_BITREPLICATE_B64_B32 = 20,
    S_ABS_I32 = 21,
    S_BCNT0_I32_B32 = 22,
    S_BCNT0_I32_B64 = 23,
    S_BCNT1_I32_B32 = 24,
    S_BCNT1_I32_B64 = 25,
    S_QUADMASK_B32 = 26,
    S_QUADMASK_B64 = 27,
    S_WQM_B32 = 28,
    S_WQM_B64 = 29,
    S_NOT_B32 = 30,
    S_NOT_B64 = 31,
    S_AND_SAVEEXEC_B32 = 32,
    S_AND_SAVEEXEC_B64 = 33,
    S_OR_SAVEEXEC_B32 = 34,
    S_OR_SAVEEXEC_B64 = 35,
    S_XOR_SAVEEXEC_B32 = 36,
    S_XOR_SAVEEXEC_B64 = 37,
    S_NAND_SAVEEXEC_B32 = 38,
    S_NAND_SAVEEXEC_B64 = 39,
    S_NOR_SAVEEXEC_B32 = 40,
    S_NOR_SAVEEXEC_B64 = 41,
    S_XNOR_SAVEEXEC_B32 = 42,
    S_XNOR_SAVEEXEC_B64 = 43,
    S_AND_NOT0_SAVEEXEC_B32 = 44,
    S_AND_NOT0_SAVEEXEC_B64 = 45,
    S_OR_NOT0_SAVEEXEC_B32 = 46,
    S_OR_NOT0_SAVEEXEC_B64 = 47,
    S_AND_NOT1_SAVEEXEC_B32 = 48,
    S_AND_NOT1_SAVEEXEC_B64 = 49,
    S_OR_NOT1_SAVEEXEC_B32 = 50,
    S_OR_NOT1_SAVEEXEC_B64 = 51,
    S_AND_NOT0_WREXEC_B32 = 52,
    S_AND_NOT0_WREXEC_B64 = 53,
    S_AND_NOT1_WREXEC_B32 = 54,
    S_AND_NOT1_WREXEC_B64 = 55,
    S_MOVRELS_B32 = 64,
    S_MOVRELS_B64 = 65,
    S_MOVRELD_B32 = 66,
    S_MOVRELD_B64 = 67,
    S_MOVRELSD_2_B32 = 68,
    S_GETPC_B64 = 71,
    S_SETPC_B64 = 72,
    S_SWAPPC_B64 = 73,
    S_RFE_B64 = 74,
    S_SENDMSG_RTN_B32 = 76,
    S_SENDMSG_RTN_B64 = 77
};

uint32_t SOP1(const uint8_t OP,
              const uint8_t SSRC0,
              const uint8_t SDST);

#endif
