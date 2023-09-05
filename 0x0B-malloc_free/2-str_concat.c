#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **str_concat - this code shall combines strings
 *@s1: this represent first str to be connected
 *@s2: this shall rrpresent the 2nd str to connect
 *Return: it shall return the connected string or null if void
 */
char *str_concat(char *s1, char *s2)
{
int x = 0;
int y = 0;
int z = 0;
int w;
char *a;
if (s1 == NULL)
{
s1 = "\0";
}
if (s2 == NULL)
{
s2 = "\0";
}
while (s1[x])
{
x++;
}
while (s2[y])
{
y++;
}
w = x + y + 1;
a = malloc(w *sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (; z < w; z++)
z < x ? (a[z] = s1[z]) : (a[z] = s2[z - x]);
return (a);
}
