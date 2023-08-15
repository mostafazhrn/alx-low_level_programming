#include "main.h"
/**
 *print_alphabet - the code prints a-z using putchar
 *Return: it shall return 0 in success
 */
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
