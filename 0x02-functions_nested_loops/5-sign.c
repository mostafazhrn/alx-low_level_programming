#include "main.h"
/**
 *print_sign - checks if the no. is + , - or not
 *@n: represents the number checked
 *Return: it shall return 1 in +ve 0 in 0 -1 in -ve and / else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('-');
return ('/');
}
}
