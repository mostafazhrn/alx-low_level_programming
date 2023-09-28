#include "main.h"
/**
 *flip_bits - this code shall get nums of bits
 *@n: this shall represent the num
 *@m: this shall represent num of n
 *Return: it shall return num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned long int y;
for (y = 0; x > 0; x >>= 1)
{
y += (x & 1);
}
return (y);
}
