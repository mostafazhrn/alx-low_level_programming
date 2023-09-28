#include "main.h"
/**
 *print_binary - this code shall print binary
 *@n: this shall represent the num to be printed
 *Return: it shall return printed nums
 */
void print_binary(unsigned long int n)
{
switch (n > 1)
{
case 1:
print_binary(n >> 1);
break;
}
_putchar((n & 1) + '0');
}
