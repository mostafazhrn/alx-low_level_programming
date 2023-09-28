#include "main.h"
/**
 *get_endianness - this code shall get endianness
 *Return: it shall return 0 or 1 depend on endianne
 */
int get_endianness(void)
{
int x = 1;
char *y = (char *)&x;
switch (*y == 1)
{
case 1:
return (1);
break;
}
return (0);
}
