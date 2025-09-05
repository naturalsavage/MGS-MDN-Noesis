#include "util.h"
#include <cassert>

int main() {
    // Positive value remains unchanged
    assert(negateBits(0b01111111111, 11) == 1023);
    // Value with sign bit set should be sign-extended
    assert(negateBits(0b10000000000, 11) == -1024);
    // All bits set should produce -1
    assert(negateBits(0b11111111111, 11) == -1);
    return 0;
}
