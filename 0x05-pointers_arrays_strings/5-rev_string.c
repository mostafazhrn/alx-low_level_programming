#include "main.h"
/**
 *rev_string - this code shall reverse any given string
 *@s: this represent the string to be reserved
 *Return: it shall return the reversed string
 */
void rev_string(char *s)
{
int x, y;
char rev;
for (x = 0; s[x] != '\0'; x++)
{
}
x--;
for (y = 0; y <= x; x--, y++)
{
rev = s[y];
s[y] = s[x];
s[x] = rev;
}
}
