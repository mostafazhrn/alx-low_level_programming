#include "main.h"
/**
 *_print_rev_recursion - this program prints the putsRecursion in reverse
 *@s: this represent the string to be printed
 *Return: this code shall retunr the printed str
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(++s);
_putchar(*s);
}
