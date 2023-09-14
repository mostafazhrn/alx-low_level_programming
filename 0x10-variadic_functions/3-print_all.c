#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *pt_c - this code shall put char
 *@typ: this shall represent the va
 *Return: it shall return void
 */
void pt_c(va_list typ)
{
printf("%c", va_arg(typ, int));
}
/**
 *pt_i - this code shall put int
 *@typ: this shall represent the va
 *Return: it shall return void
 */
void pt_i(va_list typ)
{
printf("%i", va_arg(typ, int));
}
/**
 *pt_f - this code shall put float
 *@typ: this shall represent the va
 *Return: it shall return void
 */
void pt_f(va_list typ)
{
printf("%f", va_arg(typ, double));
}
/**
 *pt_s - this code shall put str
 *@typ: this shall represent the va
 *Return: it shall return void
 */
void pt_s(va_list typ)
{
char *x;
x = va_arg(typ, char *);
if (x == NULL)
{
printf("(nil)");
return;
}
printf("%s", x);
}
/**
 *print_all - this code shall print all and anything
 *@format: this shall represent all args
 *Return: it shall return void
 */
void print_all(const char * const format, ...)
{
unsigned int a = 0;
unsigned int b;
va_list all;
char *c = "";
fu pts[] = {
{"c", pt_c},
{"i", pt_i},
{"f", pt_f},
{"s", pt_s},
};
va_start(all, format);
while (format && format[a])
{
b = 0;
while (b < 4)
{
if (pts[b].pt[0] == format[a])
{
printf("%s", c);
c = ", ";
pts[b].fu(all);
break;
}
b++;
}
a++;
}
printf("\n");
va_end(all);
}
