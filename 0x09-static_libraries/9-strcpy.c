#include "main.h"
/**
 *_strcpy - this code copies a string then paste it
 *@dest: represent the the place for the string to be copied
 *@src: represent the string to be copied
 *Return: it shall return the string to be copied
 */
char *_strcpy(char *dest, char *src)
{
int x = 0;
while (src[x] != '\0')
{
dest[x] = src[x];
x++;
}
dest[x++] = '\0';
return (dest);
}
