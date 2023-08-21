#include "main.h"
/**
 *puts2 - this code prints a string and leave the other
 *@str: this reprsesnts the string to be printed
 *Return: it shall return the string
 */
void puts2(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++)
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
}
_putchar('\n');
}
