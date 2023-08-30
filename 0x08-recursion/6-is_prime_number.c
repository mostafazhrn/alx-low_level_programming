#include "main.h"
/**
 *recursion - this program verifys if int is prime no
 *@x: this int represnt the var for iteration
 *@y: this int represent the int to be checked
 *Return: it shall return 1 or 0 depend on prime no or not
 */
int recursion(int x, int y)
{
if (x == y - 1)
{
return (1);
}
else if (y % x == 0 || y < 2)
{
return (0);
}
else if (y > x)
{
return (recursion(x + 1, y));
}
return (1);
}
/**
 *is_prime_number - this code checks if the int is prime or not
 *@n: repesents the int to be checked
 *Return: it shall retrun the checked int
 */
int is_prime_number(int n)
{
return (recursion(2, n));
}
