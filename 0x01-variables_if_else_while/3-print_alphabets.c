#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)

{
char x;

char y;
 char s= '\n';
for (x = 'a'; x <= 'z'; x++)
{putchar(x); }

for (y = 'A'; y <= 'Z'; y++)
{putchar(y); }
putchar(s);
return (0);
}
