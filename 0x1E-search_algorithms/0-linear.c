#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - THis code shall search arry of ints using linear algo
 * @array: This shall represent the ptr to 1st elem of array
 * @size: THis shall rep the num of elems in array
 * @value: This shall rep the value to search for
 * Return: This shall return ind of valu if exists or -1 if it doesn't
*/
int linear_search(int *array, size_t size, int value)
{
size_t x = 0;
if (array == NULL)
{
return (-1);
}
while (x < size)
{
printf("Value checked array[%d] = [%d]\n", (int)x, array[x]);
if (array[x] == value)
return (x);
x++;
}
return (-1);
}
