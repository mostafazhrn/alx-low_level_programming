#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **string_nconcat - this program shall connect two strs
 *@s1: this represent the 1st str to be connected
 *@s2: htis represent the 2nd Str to connect
 *@n: this represent the int of cp from str1 to str 2
 *Return: it shall rtrn a new loc " " or NULL in fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x = 0;
unsigned int y = 0;
unsigned int z = 0;
unsigned int w;
char *a;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (; s1[x]; x++)
;
for (; s2[y]; y++)
;
y > n ? (y = n) : (n = y);
w = x + y + 1;
a = malloc(w * sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (;z < w - 1; z++)
z < x ? (a[z] = s1[z]) : (a[z] = s2[z - x]);
a[w] = '\0';
return (a);
}
