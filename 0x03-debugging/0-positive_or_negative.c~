#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *Description: main - this code runs a random
 *no. and assign a text depending on this no.
 *Return: in success it shall return zero
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* the if stmt i added */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
