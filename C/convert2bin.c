#include <stdio.h>

/**
 * C stores numbers as binary, but can not output them as binary.
 * So that, you can use bitwise operators trick to display them.
 */
void bin(unsigned n)
{
    for (unsigned i = 1 << 31; i > 0; i /= 2)
        (n & i) ? printf("1") : printf("0");
}