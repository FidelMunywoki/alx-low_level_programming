#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: value 1
 * @b: value 2
 *
 *Return: Always 0
 */

void swap_int(int *a, int *b)
{
int p;

p = *a;
*a = *b;
*b = p;
}
