#include "holberton.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: memory area..
 * @n: bytes of the memory location.
 * @src: pointer to memory location.
 * Return: pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
