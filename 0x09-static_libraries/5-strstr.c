#include <stddef.h>
#include "main.h"
/**
 **_strstr - this code locates the substr
 *@haystack: this represents the string to be searched
 *@needle: this represented the string to be located
 *Return: it shall return the located str
 */
char *_strstr(char *haystack, char *needle)
{
int x = 0;
int y = 0;
for (; haystack[x] != '\0'; x++)
{
for (; needle[y] != '\0'; y++)
{
if (haystack[x + y] != needle[y])
{
break;
}
}
if (needle[y] == '\0')
{
return (haystack + x);
}
}
return ('\0');
}
