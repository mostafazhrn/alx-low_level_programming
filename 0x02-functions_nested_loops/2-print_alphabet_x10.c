#include "main.h"
/**
 *print_alphabet_x10 - this code print the az ten times
 *Return: it shall return nothing
 */
void print_alphabet_x10(void)
{
int x;
char y;
for (x = 0; x < 10; ++x)
{
for (y = 'a'; y <= 'z'; ++y)
{
_putchar(y);
}
_putchar('\n');
}
}
