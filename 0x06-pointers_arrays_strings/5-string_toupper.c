#include "holberton.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string
 * Return: c
 */

char *string_toupper(char *c)
{
int alphabet;

for (alphabet = 0; c[alphabet] != '\0'; alphabet++)
{
if (c[alphabet] > 96 && c[alphabet] < 123)
{
c[alphabet] -= 32;
}
}
return (c);
}
