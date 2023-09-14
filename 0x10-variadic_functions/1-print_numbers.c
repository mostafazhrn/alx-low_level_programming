#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - this code shall give nos
 *@separator: this shall represent the sep of nos
 *@n: this shall rpresent the nos of args
 *Return: this code shall return zero in success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
  va_list digit;
  unsigned int x = 0;
  if (separator == NULL)
    {
      separator = "";
    }
  va_start(digit, n);
  while (x < n)
    {
      printf("%d", va_arg(digit, int));
      if (n == x + 1)
	{
	  break;
	}
      printf("%s", separator);
      x++;
    }
  printf("\n");
  va_end(digit);
}
