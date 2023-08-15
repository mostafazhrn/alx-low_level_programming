#include "main.h"
/**
 * main - this code verifys print Last digit
 *Return: this shall retunr 0 in sucess
 */
int main(void)
{
int r;
print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}
