#include <iostream>
#include <bitset>
#include <cstdint>
#include <cstring>
#include <climits>

int main() {
    unsigned int value = 0b10101010; // Example value

    // std::bitset equivalent of __builtin_popcount
    std::cout << "std::bitset popcount: " << std::bitset<32>(value).count() << "\n"; // Output: 4

    // std::bitset equivalent of __builtin_ctz
    int trailing_zeros = 0;
    for (int i = 0; i < 32; ++i) {
        if ((value >> i) & 1) break;
        trailing_zeros++;
    }
    std::cout << "Trailing zeros: " << trailing_zeros << "\n"; // Output: 1

    // std::bitset equivalent of __builtin_clz
    int leading_zeros = 0;
    for (int i = 31; i >= 0; --i) {
        if ((value >> i) & 1) break;
        leading_zeros++;
    }
    std::cout << "Leading zeros: " << leading_zeros << "\n"; // Output: 24

    // std::bitset equivalent of __builtin_parity
    bool parity = std::bitset<32>(value).count() % 2 != 0;
    std::cout << "Parity: " << parity << "\n"; // Output: 0

    // Arithmetic overflow check using standard C++
    unsigned int a = UINT_MAX, b = 1, result;
    if (a > UINT_MAX - b) {
        std::cout << "Addition Overflow\n"; // Output: Addition Overflow
    } else {
        result = a + b;
        std::cout << "Addition Result: " << result << "\n";
    }

    // Memory copy equivalent
    char src[10] = "test";
    char dest[10];
    std::memcpy(dest, src, 5);
    std::cout << "Memcpy: " << dest << "\n"; // Output: test

    // Memory set equivalent
    char buffer[10];
    std::memset(buffer, '-', 9);
    buffer[9] = '\0';
    std::cout << "Memset: " << buffer << "\n"; // Output: ---------

    // Memory move equivalent
    char overlap[] = "abcdef";
    std::memmove(overlap + 2, overlap, 4);
    std::cout << "Memmove: " << overlap << "\n"; // Output: ababcd

    // Expect equivalent (not directly available in standard C++)
    if (value == 0) {
        std::cout << "Expected: Unexpected\n";
    } else {
        std::cout << "Expected: Expected\n"; // Output: Expected
    }

    return 0;
}
