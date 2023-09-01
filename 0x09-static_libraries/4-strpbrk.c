#include "main.h"
/**
 **_strpbrk - this code searches for an any size string
 *@s: this represent the string to be searched
 *@accept: this represents the str to be accepted
 *Return: it shall retrun the sccepted string
 */
char *_strpbrk(char *s, char *accept)
{
int x;
int y;
for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y])
{
s += x;
return (s);
}
}
}
return ('\0');
}
