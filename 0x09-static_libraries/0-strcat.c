#include "main.h"
/**
 **_strcat - this code links to strings together
 *@dest: this represents the destination string
 *@src: this represents the source string
 *Return: it shall return the linked strings together
 */
char *_strcat(char *dest, char *src)
{
int x;
int y;
for (x = 0; dest[x] != '\0'; x++)
{
}
for (y = 0; src[y] != '\0'; y++)
{
dest[x] = src[y];
x++;
}
dest[x] = '\0';
return (dest);
}
