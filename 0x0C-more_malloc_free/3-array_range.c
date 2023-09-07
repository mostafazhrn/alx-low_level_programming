#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **array_range - this code shall create array of ints
 *@min: this represents the start of array of int
 *@max: this represent the max of array
 *Return: it shall return Null in fail of array in success
 */
int *array_range(int min, int max)
{
int *x;
int y = 0;
int z;
if (min > max)
{
return (NULL);
}
z = max - min + 1;
x = malloc(z *sizeof(int));
if (!x)
{
return (NULL);
}
while (y < z)
{
x[y] = min++;
y++;
}
return (x);
}
