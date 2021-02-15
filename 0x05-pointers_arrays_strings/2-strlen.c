#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *@s: string
 *
 *Return: 0 always
 */

int _strlen(char *s)
{
int c;

for (c = 0; s[c] != '\0'; c++)
;

return (c);
}
