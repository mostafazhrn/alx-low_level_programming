#include "main.h"
/**
 *print_last_digit - this code prints last digit of the number
 *@x: the number we need to find
 *Return: it shall the last digit
 */
int print_last_digit(int x)
{
if (x < 0)
x = x * -1;
_putchar((x % 10) + '0');
return (x % 10);
}
