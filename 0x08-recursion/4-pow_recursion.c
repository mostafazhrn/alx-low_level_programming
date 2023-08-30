#include "main.h"
/**
 *_pow_recursion - this program shall print int to the pwr of int
 *@x: this represent the first integar of process
 *@y: this represent the power to be multiplied by
 *Return: it shall return -1 if pwo is <0 & pwr y to x
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y < 0)
return (-1);
return (x * _pow_recursion(x, y - 1));
}
