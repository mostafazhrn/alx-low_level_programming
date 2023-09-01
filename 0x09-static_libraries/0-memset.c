#include "main.h"
/**
 **_memset - this code prints a memory of a constant
 *@s: this represents the integar primary
 *@b: this represnts the integar of destination
 *@n: this represents the value of memory
 *Return: it shall return the value of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned  int x;
for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
