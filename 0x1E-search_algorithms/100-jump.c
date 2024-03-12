#include "search_algos.h"
#include <stdio.h>
#include <math.h>
/**
 * jump_search - THis code shall search arry of ints using jump algo
 * @array: This shall represent the ptr to 1st elem of array
 * @size: THis shall rep the num of elems in array
 * @value: This shall rep the value to search for
 * Return: This shall return ind of valu if exists or -1 if it doesn't
*/
int jump_search(int *array, size_t size, int value)
{
size_t x;
size_t lft;
size_t rt;
size_t jmp;
if (array == NULL)
return (-1);
jmp = sqrt(size);
for (lft = 0, rt = jmp; rt < size; lft += jmp, rt += jmp)
{
printf("Value checked array[%d] = [%d]\n", (int)lft, array[lft]);
if (array[rt] >= value)
break;
}
printf("Value found between indexes [%d] and [%d]\n", (int)lft, (int)rt);
for (x = lft; x <= rt && x < size; x++)
{
printf("Value checked array[%d] = [%d]\n", (int)x, array[x]);
if (array[x] == value)
{
return (x);
}
}
return (-1);
}
