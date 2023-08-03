#include "main.h"
#include <stdio.h>

/**
 * _pow2 - get the 2 to the specificed power
 * @exp: the exponent/power
 * Return: 2 to power exp
*/
unsigned int _pow2(int exp)
{
    int i;
    unsigned int res = 2;
    if (exp == 0)
        return (1);

    for (i = 1; i < exp; i++)
        res *= 2;
    return (res);
}

/**
 * binary_to_uint - converts a binary number to an unsinged int
 * @b: pointer to a string that conatins 0's and 1's
 * Return: the result of conversion
 * - else 0 if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
    char c;
    int i;
    int len = 0;
    unsigned int result = 0;

    if (b == NULL)
        return (0);
    while (b[len] != '\0')
        len++;
    printf("b = %s\n", b);
    for (i = len - 1; i >= 0; i--)
    {
        c = b[i];
        if (c != '0' && c != '1')
            return (0);
        else if (c == '1' + 0)
            result += _pow2(i);
    }

    return (result);
}