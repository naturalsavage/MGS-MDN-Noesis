#pragma once
#include <cstdint>

inline int32_t negateBits(int32_t val, int numBits) {
    int hi = numBits - 1;
    int32_t mx = 1 << hi;
    return val >> hi ? val |= -mx : val;
}