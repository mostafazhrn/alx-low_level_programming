#include "main.h"
/**
 *factorial - this program shall print the factorial of nos
 *@n: this represent the int to get its factorial
 *Return: it shall return -1 if not correct otherwise factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
return (n * factorial(n - 1));
}
