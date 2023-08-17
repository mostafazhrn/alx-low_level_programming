#include <stdio.h>
/**
 *main - this program print 1-100 except for no. mul by 3&5
 *it says fizz buzz
 *Return: it shall return 0 in success
 */
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz");
}
else if (x % 5 == 0)
{
printf("Buzz");
}
else if (x % 3 == 0)
{
printf("Fizz");
}
else
printf("%d", x);
if (x != 100)
printf(" ");
}
printf("\n");
return (0);
}
