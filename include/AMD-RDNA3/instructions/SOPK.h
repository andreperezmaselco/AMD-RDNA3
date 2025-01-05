#ifndef AMD_RDNA3_INSTRUCTIONS_SOPK_H
#define AMD_RDNA3_INSTRUCTIONS_SOPK_H

/* C */
#include <stdint.h>

enum {
    S_MOVK_I32 = 0,
    S_VERSION = 1,
    S_CMOVK_I32 = 2,
    S_CMPK_EQ_I32 = 3,
    S_CMPK_LG_I32 = 4,
    S_CMPK_GT_I32 = 5,
    S_CMPK_GE_I32 = 6,
    S_CMPK_LT_I32 = 7,
    S_CMPK_LE_I32 = 8,
    S_CMPK_EQ_U32 = 9,
    S_CMPK_LG_U32 = 10,
    S_CMPK_GT_U32 = 11,
    S_CMPK_GE_U32 = 12,
    S_CMPK_LT_U32 = 13,
    S_CMPK_LE_U32 = 14,
    S_ADDK_I32 = 15,
    S_MULK_I32 = 16,
    S_GETREG_B32 = 17,
    S_SETREG_B32 = 18,
    S_SETREG_IMM32_B32 = 19,
    S_CALL_B64 = 20,
    S_WAITCNT_VSCNT = 24,
    S_WAITCNT_VMCNT = 25,
    S_WAITCNT_EXPCNT = 26,
    S_WAITCNT_LGKMCNT = 27
};

uint32_t SOPK(const uint8_t OP,
              const uint16_t SIMM16,
              const uint8_t SDST);

#endif
