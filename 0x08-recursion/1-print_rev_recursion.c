#include "holberton.h"

/**
 *_print_rev_recursion - return reverse of a string
 *@s: string
 *
 *Retuns: 0
 */

void _print_rev_recursion(char *s)
{
if (s[0] != '\0')
{
_print_rev_recursion(s + 1);

_putchar(*s);
}
}
