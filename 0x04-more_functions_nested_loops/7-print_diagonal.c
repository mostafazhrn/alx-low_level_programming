#include "main.h"
/**
 *print_diagonal - it shall draw a diagonal line
 *@n: is the number that shall draw the line
 *Return: it shall return a diagonal line drawn
 */
void print_diagonal(int n)
{
int x;
int y;
if (n > 0)
{
for (x = 0; x <= n; x++)
{
for (y = 1; y <= x; y++)
{
if (y != x)
_putchar(' ');
else if (y == x)
{
_putchar('\\');
_putchar('\n');
}
}
}
}
else
_putchar('\n');
}
