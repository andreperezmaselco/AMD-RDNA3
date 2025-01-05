#ifndef AMD_RDNA3_INSTRUCTIONS_SMEM_H
#define AMD_RDNA3_INSTRUCTIONS_SMEM_H

/* C */
#include <stdint.h>

enum {
    S_LOAD_B32 = 0,
    S_LOAD_B64 = 1,
    S_LOAD_B128 = 2,
    S_LOAD_B256 = 3,
    S_LOAD_B512 = 4,
    S_BUFFER_LOAD_B32 = 8,
    S_BUFFER_LOAD_B64 = 9,
    S_BUFFER_LOAD_B128 = 10,
    S_BUFFER_LOAD_B256 = 11,
    S_BUFFER_LOAD_B512 = 12,
    S_GL1_INV = 32,
    S_DCACHE_INV = 33
};

uint64_t SMEM(const uint8_t SBASE,
              const uint8_t SDATA,
              const uint8_t DLC,
              const uint8_t GLC,
              const uint8_t OP,
              const uint32_t OFFSET,
              const uint8_t SOFFSET);

#endif
