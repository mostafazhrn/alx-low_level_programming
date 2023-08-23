#include "main.h"
/**
 **_strncpy - this code print strings just like strncpy
 *@dest: this represent the destination of cpy
 *@src: this represent the source of cp
 *@n: this rperesnt the copy
 *Return: it shall return the strings copied
 */
char *_strncpy(char *dest, char *src, int n)
{
int x;
for (x = 0; x < n && src[x] != '\0'; x++)
{
dest[x] = src[x];
}
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
