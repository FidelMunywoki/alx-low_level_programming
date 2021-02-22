#include "holberton.h"

/**
 * _strchr - Pointer to first occurrence of character c in string s
 * @s: pointer.
 * @c: character.
 * Return: NULL if the character is not found or Pointer
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
if (s[i] == c)
{
return (s + i);
}
return (0);
}
