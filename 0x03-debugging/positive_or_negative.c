#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *positive_or_negative - this code runs a random
 *@i: no checked and assign a text depending on this no.
 *Return: in success it shall return zero
 */
void positive_or_negative(int i)
{
/* the if stmt i added */
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
}
