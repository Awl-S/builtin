#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int value = 0b10101010; // Example value

    // __builtin_popcount
    printf("__builtin_popcount: %d\n", __builtin_popcount(value)); // Output: __builtin_popcount: 4

    // __builtin_popcountl
    unsigned long long_value = 0b10101010;
    printf("__builtin_popcountl: %d\n", __builtin_popcountl(long_value)); // Output: __builtin_popcountl: 4

    // __builtin_ctz
    unsigned int trailing_zeros = __builtin_ctz(value);
    printf("__builtin_ctz: %u\n", trailing_zeros); // Output: __builtin_ctz: 1

    // __builtin_clz
    unsigned int leading_zeros = __builtin_clz(value);
    printf("__builtin_clz: %u\n", leading_zeros); // Output: __builtin_clz: 24

    // __builtin_parity
    printf("__builtin_parity: %d\n", __builtin_parity(value)); // Output: __builtin_parity: 0

    // __builtin_add_overflow
    unsigned int a = UINT_MAX, b = 1, result;
    if (__builtin_add_overflow(a, b, &result)) {
        printf("Addition Overflow\n"); // Output: Addition Overflow
    } else {
        printf("Addition Result: %u\n", result);
    }

    // __builtin_memcpy
    char src[10] = "test";
    char dest[10];
    __builtin_memcpy(dest, src, 5);
    printf("__builtin_memcpy: %s\n", dest); // Output: __builtin_memcpy: test

    // __builtin_memset
    char buffer[10];
    __builtin_memset(buffer, '-', 9);
    buffer[9] = '\0';
    printf("__builtin_memset: %s\n", buffer); // Output: __builtin_memset: ---------

    // __builtin_memmove
    char overlap[] = "abcdef";
    __builtin_memmove(overlap + 2, overlap, 4);
    printf("__builtin_memmove: %s\n", overlap); // Output: __builtin_memmove: ababcd

    // __builtin_expect
    if (__builtin_expect(value == 0, 0)) {
        printf("__builtin_expect: Unexpected\n");
    } else {
        printf("__builtin_expect: Expected\n"); // Output: __builtin_expect: Expected
    }

    // __builtin_types_compatible_p
    if (__builtin_types_compatible_p(typeof(a), unsigned int)) {
        printf("__builtin_types_compatible_p: Compatible\n"); // Output: __builtin_types_compatible_p: Compatible
    }

    // __builtin_constant_p
    if (__builtin_constant_p(42)) {
        printf("__builtin_constant_p: Is Constant\n"); // Output: __builtin_constant_p: Is Constant
    }

    return 0;
}
