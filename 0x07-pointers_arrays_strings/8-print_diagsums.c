#include <stdio.h>
#include "main.h"
/**
 *print_diagsums - this code shall print the sum of two diognly squares
 *@a: this represents the int to inputed
 *@size: this represents the value to be printed
 *Return: it shall return the sum of ints to be added
 */
void print_diagsums(int *a, int size)
{
int x = 0;
int y = 0;
int z = 0;
while (x < size)
{
y += a[(size + 1) * x];
z += a[(size - 1) * (x + 1)];
x++;
}
printf("%i, %i\n", y, z);
}
