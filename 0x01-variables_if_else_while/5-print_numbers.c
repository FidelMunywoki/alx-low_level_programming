#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
int number;
char s = '\n';
while (number < 10)
{
printf("%d", number);
number++;
}
putchar(s);
return (0);
}
