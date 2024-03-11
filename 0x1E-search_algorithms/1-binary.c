#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - This code shall search arry of ints using binary algo
 * @array: This shall represent the ptr to 1st elem of array
 * @size: This shall rep the num of elems in array
 * @value: This shall rep the value to search for
 * Return: This shall return ind of valu if exists or -1 if it doesn't
*/
int binary_search(int *array, size_t size, int value)
{
size_t x;
size_t lft = 0;
size_t rt = size - 1;
if (array == NULL)
{
return (-1);
}
while (rt >= lft)
{
printf("Searching in array: ");
for (x = lft; x < rt; x++)
{
printf("%d, ", array[x]);
}
printf("%d\n", array[x]);
x = lft + (rt - lft) / 2;
if (array[x] == value)
return (x);
if (array[x] < value)
lft = x + 1;
else
rt = x - 1;
}
return (-1);
}
