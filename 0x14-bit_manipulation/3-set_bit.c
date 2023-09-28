#include "main.h"
/**
 * set_bit - this code shall set val to ind
 *@index: this shasll represest the val of int
 *@n: this shall represent the ptr
 *Return: it shall return 1 in succ or -1 in fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
switch (index >= (sizeof(unsigned long int) * 8))
{
case 1:
return (-1);
break;
}
*n ^= (1 << index);
return (1);
}
