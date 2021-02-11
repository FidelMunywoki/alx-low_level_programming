#include "holberton.h"

/**
 * print_numbers - prints numbers 0-9 followed by newline using _putchar
 * Return: 0 to 9
 *Description: You can only use _putchar twice
 */

void print_numbers(void)

{
int i;

for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
