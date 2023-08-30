#include "main.h"
/**
 *recursive - this program shall print the sq root of int
 *@x: this represent the int to be printed
 *@y: this represent the sq of int to be printed
 *Return: it shall return sq root of nos or -1 if no sq root avai
 */
int recursive(int x, int y)
{
if (x == (y * y))
{
return (y);
}
else if ((y * y) >= x)
{
return (-1);
}
else
return (recursive(x, y + 1));
}
/**
 *_sqrt_recursion - this program shall print the sq of ints
 *@n: this represent the int to be printed
 *Return: it shall return the int to be sq
 */
int _sqrt_recursion(int n)
{
if (n <= 0)
{
return (-1);
}
return (recursive(n, 0));
}
