#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **create_array - this prog makes an array of chars and start with spec
 *@size: this shall represent the size of array
 *@c: this shall represent the chars of the array
 *Return: it shall return the array value or zero if no success
 */
char *create_array(unsigned int size, char c)
{
  char *y = malloc(size);
  if (size == 0 || y == 0)
    {
      return (0);
    }
  while (size--)
    {
      y[size] = c;
    }
  return (y);
}
