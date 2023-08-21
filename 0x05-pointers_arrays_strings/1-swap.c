#include "main.h"
/**
 *swap_int - this code swaps a with b
 *@a: this represent the int a
 *@b: this int represents int b
 *Return: it shall return the reslut of swapping both ints
 */
void swap_int(int *a, int *b)
{
int valu;
valu = *a;
*a = *b;
*b = valu;
}
