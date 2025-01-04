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
};

struct SOP1 {
    uint8_t SSRC0;
    uint8_t OP;
    uint8_t SDST : 7;
    uint16_t ENCODING : 9;
};

uint32_t SOP1(const uint8_t SSRC0,
              const uint8_t OP,
              const uint8_t SDST);

#endif
