#include "main.h"
/**
 *print_rev - this code prints string in reverse
 *@s:represents the string to be printed
 *Return: it shall retunr the reverse string
 */
void print_rev(char *s)
{
int x;
for (x = 0; s[x] != '\0'; x++)
{
}
for (x -= 1; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
