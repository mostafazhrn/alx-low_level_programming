#include <stdio.h>
#include "main.h"
/**
 *print_array - this code prints elements of an array
 *@a: this represnt the array
 *@n: this represent the integar to be printed
 *Return: this code shall return the arrays
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x < n - 1)
{
printf(", ");
}
}
printf("\n");
}
