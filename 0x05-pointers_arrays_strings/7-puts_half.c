#include "main.h"
/**
 *puts_half - this code shall print the other half of a string
 *@str: this represnt the string to be printed
 *Return: it shall retunr the string to be printed
 */
void puts_half(char *str)
{
int x, y;
for (x = 0; str[x] != '\0'; x++)
{
}
if (x % 2 == 1)
{
y = (x - 1) / 2;
y += 1;
}
else
{
y = x / 2;
}
while (y < x)
{
_putchar(str[y]);
y++;
}
_putchar('\n');
}
