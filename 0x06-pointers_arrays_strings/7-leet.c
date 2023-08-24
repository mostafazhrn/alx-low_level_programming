#include "main.h"
/**
 **leet - this code replace letters encode string to 1337
 *@a: this represents the strings
 *Return: it shall return the replace string on success
 */
char *leet(char *a)
{
int x;
int y;
char b[] = "aAeEoOtTlL";
char c[] = "4433007711";
for (x = 0; a[x] != '\0'; x++)
{
y = 0;
while (y < 10)
{
if (b[y] == a[x])
{
a[x] = c[y];
}
y++;
}
}
return (a);
}
