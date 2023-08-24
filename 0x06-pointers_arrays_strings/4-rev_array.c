#include "main.h"
/**
 *reverse_array - this code print an array in reverse
 *@a: this represent the integar to be printed
 *@n: this represent int to be printed
 *Return: this code shall return an array in reverse
 */
void reverse_array(int *a, int n)
{
int x;
int y;
n = n - 1;
for (x = 0; x <= n; a[x++] = a[n], a[n--] = y)
{
y = a[x];
}
}
