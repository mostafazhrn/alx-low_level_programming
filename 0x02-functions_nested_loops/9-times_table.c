#include "main.h"
/**
 *times_table - it shall print 9 time tables
 *Return: it shall print the time table
 */
void times_table(void)
{
int x;
int y;
int eql;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
/*the multiply process*/
eql = (x * y);
if (y != 0)
{
_putchar(',');
_putchar(' ');
}
if (eql >= 10)
{
_putchar((eql / 10) + '0');
_putchar((eql % 10) + '0');
}
else if (eql < 10 && y != 0)
{
_putchar(' ');
_putchar((eql % 10) + '0');
}
else
_putchar((eql % 10) + '0');
}
_putchar('\n');
}
}
