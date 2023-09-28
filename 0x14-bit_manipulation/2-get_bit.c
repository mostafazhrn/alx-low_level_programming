#include "main.h"
/**
 *get_bit - this code shall return val of num
 *@n: this shall represent the int
 *@index: this shall represent the ind of num
 *Return: it shall return num or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
switch (index >= (sizeof(unsigned long int) * 8))
{
case 1:
return (-1);
break;
}
switch ((n & (1 << index)) == 0)
{
case 1:
return (0);
break;
}
return (1);
}
