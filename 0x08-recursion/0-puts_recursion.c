#include "main.h"
/**
 *_puts_recursion - this code prints the putsWithRecur string
 *@s: this represents the string to be printed
 *Return: it shall retrun the string to be printed
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
