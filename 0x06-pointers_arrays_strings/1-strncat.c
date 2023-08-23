#include "main.h"
/**
 **_strncat - this code links two strings together
 *@dest: this represent the destination string
 *@src: this represent the source string
 *@n: this represent the link of the strings
 *Return: it shall return the linked string
 */
char *_strncat(char *dest, char *src, int n)
{
int x;
int y;
for (x = 0; dest[x] != '\0'; x++)
{

}
for (y = 0; y < n && src[y] != '\0'; y++, x++)
{
dest[x] = src[y];
}
dest[x] = '\0';
return (dest);
}
