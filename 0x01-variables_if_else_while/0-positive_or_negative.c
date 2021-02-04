#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code execution
 * Description: determine if n is +ve,-ve,=
 * Return: 0
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is Positive\n", n);
}
else if (n < 0)
{
printf("%d is Negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
