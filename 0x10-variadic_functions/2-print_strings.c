#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print all types
 * @separator: separator of the strings
 * @n: size
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list stringlist;
char *string;

va_start(stringlist, n);

for (i = 0; i < n; i++)
{
string = va_arg(stringlist, char *);
printf("%s", string ? string : "(nil)");

if (i < (n - 1) && separator)
pintf("%s", separator);
}

printf("\n");
va_end(stringlist);
}
