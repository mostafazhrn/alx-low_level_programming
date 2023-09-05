#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 ***alloc_grid - this program shall print a 2d ints array
 *@width: this shall represent the width of the 2darray
 *@height: this shall rperesent the height of the 2dArray
 *Return: it shall return the 2dArray or null if empty
 */
int **alloc_grid(int width, int height)
{
int x = 0;
int y = 0;
int **z;
z = malloc(sizeof(*z) * height);
if (width <= 0 || height <= 0 || z == 0)
return (NULL);
else
{
while (x < height)
{
z[x] = malloc(sizeof(**z) * width);
if (z[x] == 0)
{
while (x--)
free(z[x]);
free(z);
return (NULL);
}
while (y < width)
{
z[x][y] = 0;
y++;
}
x++;
}
}
return (z);
}
