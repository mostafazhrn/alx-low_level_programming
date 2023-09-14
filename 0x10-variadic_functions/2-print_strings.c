#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - this program shall prnt strs
 *@separator: this shall represent the sep of ints
 *@n: this shall represent the args
 *Return: it shall return zero in success or nill
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x = 0;
char *y;
va_list letter;
if (separator == NULL)
separator = "";
va_start(letter, n);
while (x < n)
{
y = va_arg(letter, char *);
if (y == NULL)
{
printf("(nil)");
break;
}
printf("%s", y);
if (n == x + 1)
{
break;
}
printf("%s", separator);
x++;
}
printf("\n");
va_end(letter);
}
