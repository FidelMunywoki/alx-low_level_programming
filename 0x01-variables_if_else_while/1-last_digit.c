#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* added stdio.h */

/* betty style doc for function main goes there */
int main(void)
/*main function */
{
int n; /* n to do modulas */
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
/*Operation to extract the last digit*/

lastDigit = n % 10;
/*output script*/
if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit)
}
else if (lastDigit == 0)
{
printf("Last Digit of %d is %d and is 0\n", n, lastDigit);
}
else
{
printf("Last Digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}
