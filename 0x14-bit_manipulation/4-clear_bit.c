#include "main.h"
/**
 *clear_bit - this code shall set val of bit to cero
 *@n: this shall represent the ptr
 *@index: this shall represent the ind val
 *Return: it shall return 1 or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
switch (index >= (sizeof(unsigned long int) * 8))
{
case 1:
return (-1);
break;
}
*n &= ~(1 << index);
return (1);
}
