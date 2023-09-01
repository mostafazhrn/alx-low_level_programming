#include "main.h"
/**
 *_puts - this code prints a str to stdout
 *@str: this represent the string to be printed
 *Return: this code shall return the string
 */
void _puts(char *str)
{
int x = 0;
while (str[x] != '\0')
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}
