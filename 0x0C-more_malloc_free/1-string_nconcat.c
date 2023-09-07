#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strng - this code shall return the str len
 *@a: this represent the str to be returned
 *Return: it shall return the str len
 */
int _strng(char *a)
{
int b;
for (b = 0; *a; b++)
{
a++;
}
return (b);
}
/**
 **string_nconcat - this program shall connect two strs
 *@s1: this represent the 1st str to be connected
 *@s2: htis represent the 2nd Str to connect
 *@n: this represent the int of cp from str1 to str 2
 *Return: it shall rtrn a new loc " " or NULL in fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *z;
unsigned int in = 0;
unsigned int on = 0;
unsigned int x;
unsigned int y;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
x = _strng(s1);
y = _strng(s2);
n = (n >= y) ? y : n;
z = malloc((x + n) *sizeof(char) + 1);
if (!z)
{
return (NULL);
}
while (in < x)
{
z[in] = s1[in];
in++;
}
for (; on < n; on++, in++)
{
z[in] = s2[on];
}
z[in] = '\0';
return (z);
}
