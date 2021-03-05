Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@FidelMunywoki 
MercyMueniMwangi
/
alx-low_level_programming
1
00
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
alx-low_level_programming/0x0C-more_malloc_free/1-string_nconcat.c
@MercyMueniMwangi
MercyMueniMwangi C - More malloc, free
Latest commit d9bf192 on Dec 23, 2020
 History
 1 contributor
43 lines (32 sloc)  799 Bytes
  
#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat - Concatenates two strings
 *@s1: The first string
 *@s2: The second string
 *@n: Maximum number of bytes of s2 to concatenate to s1
 *
 *Return: If the function fails - NULL
 *        Otherwise - a pointer to the concatenated space in
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
