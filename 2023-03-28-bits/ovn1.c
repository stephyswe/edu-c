#include <stdio.h>
#include <stdbool.h>

/*
 * Prints the binary representation of a given memory block
 * size: size of the memory block in bytes
 * ptr: pointer to the memory block
 */
void printBits(size_t const size, void const *const ptr)
{
    // cast the pointer to a byte pointer
    unsigned char *b = (unsigned char *)ptr;
    unsigned char byte;
    int i, j;

    // loop through the memory block
    for (i = size - 1; i >= 0; i--)
    {
        // loop through the bits of each byte
        for (j = 7; j >= 0; j--)
        {
            // print the bit & shift the byte
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    // print a new line
    printf("\n");
}
