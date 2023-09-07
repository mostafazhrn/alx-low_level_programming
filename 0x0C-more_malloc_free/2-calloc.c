#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **_memoire - this program shall start the ptr
 *@a: this represent the chars of array
 *@b: this represent the stating vars
 *@c: this represnt the start bytes
 *Return: it shall return the ptr intit
 */
char *_memoire(char *a, int b, unsigned int c)
{
unsigned int d = 0;
while (d < c)
{
a[d] = b;
d++;
}
return (a);
}
/**
 **_calloc - this program shall allocate mem for an array using malloc
 *@nmemb: this represent the memory to be allocated
 *@size: this represent the size ofr array
 *Return: it shall return array or null i fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *x;
if (nmemb == 0 || size == 0)
{
return (0);
}
x = malloc(nmemb * size);
if (x == 0)
{
return (0);
}
_memoire(x, 0, size * nmemb);
return (x);
}
