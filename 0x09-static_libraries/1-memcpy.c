#include "main.h"
/**
 **_memcpy - this code copies an area of memory
 *@dest: this represents the destination of the copied mem
 *@src: this represents the source of cped mem
 *@n: this represnts the int to be printed
 *Return: it shall return the memorycopied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;
while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
