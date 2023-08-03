#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsinged int
 * @b: pointer to a string that conatins 0's and 1's
 * Return: the result of conversion
 * - else 0 if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return (0);
    while (*b)
    {
        if (*b != '0' && *b != '1')
            return (0);
        result <<= 1;

        if (*b == '1')
            result += 1;

        b++;
    }

    return (result);
}