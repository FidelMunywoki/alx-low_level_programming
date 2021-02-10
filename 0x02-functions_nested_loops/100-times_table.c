#include "holberton.h"

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */

void print_times_table(int n)
{
int i, j;

if (n < 16 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
_putchar(j + '0');
else if (j * i < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(j * i + '0');
}
else if (j * i < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((j * i) / 10 + '0');
_putchar((j * i) % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((j * i) / 100 + '0');
_putchar(((j * i) / 10) % 10 + '0');
_putchar((j * i) % 10 + '0');
}
}
_putchar('\n');
}
}
}
