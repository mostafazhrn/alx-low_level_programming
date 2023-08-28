#include "main.h"
/**
 *_strspn - this code gets the len of a substring
 *@s: this represents the source os str
 *@accept: this represents the accepted string
 *Return: it shall return the length of str
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int x;
unsigned int y;
unsigned int z;
for (x = 0; accept[x] != '\0'; x++)
{
for (y = 0; s[y] != 32; y++)
{
if (accept[x] == s[y])
{
z++;
}
}
}
return (z);
}
