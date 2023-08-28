#include "main.h"
/**
 **_strchr - this code searches chars in strs
 *@s: this represnts the main char
 *@c: this represents the char to be located
 *Return: it shall return the str to be located
 */
char *_strchr(char *s, char c)
{
int x;
int y = 0;
for (x = 0; s[x] != '\0'; x++)
{
}
while (y <= x)
{
if (c == s[y])
{
s += y;
return (s);
}
y++;
}
return ('\0');
}
