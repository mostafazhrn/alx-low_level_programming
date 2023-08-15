#include "main.h"
/**
 * main - this code verifys print Last digit
 *Return: this shall retunr 0 in sucess
 */
int main(void)
{
int r;
r = print_last_digit(98);
_putchar('0' + r);
r = print_last_digit(0);
_putchar('0' + r);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}
