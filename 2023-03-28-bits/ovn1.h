#include <time.h>

void printBits(size_t const size, void const *const ptr);

/*
 * Macro to set a bit in a given variable
 * tal: the variable in which the bit is to be set
 * bitNo: the bit number to set
 */
#define BIT_SET(tal, bitNo) ((tal) |= (1ULL << (bitNo)))

/*
 * Macro to clear a bit in a given variable
 * a: the variable in which the bit is to be cleared
 * b: the bit number to clear
 */
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b)))

/*
 * Macro to flip a bit in a given variable
 * a: the variable in which the bit is to be flipped
 * b: the bit number to flip
 */
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b)))

/*
 * Macro to check if a bit is set in a given variable
 * a: the variable to check
 * b: the bit number to check
 */
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b))))
