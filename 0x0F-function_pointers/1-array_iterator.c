#include "function_pointers.h"
/**
 *array_iterator - this code executes a func on an array
 *@array: this shall represent the int of arr
 *@size: this shall represent the size of arr
 *@action: this shall represent the ptr of func
 *Return: it shall retrun zero in success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;
if (array != NULL && action != NULL && size > 0)
{
for (x = 0; x < size; x++)
{
action(array[x]);
}
}
}
