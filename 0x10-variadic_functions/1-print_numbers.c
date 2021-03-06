#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print each number with separator, followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of args passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list printedlist;

va_start(printedlist, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(printedlist, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");

va_end(printedlist);
}
