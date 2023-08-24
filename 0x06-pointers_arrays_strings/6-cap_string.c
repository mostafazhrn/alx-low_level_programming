#include "main.h"
/**
 **cap_string - this code shall print capitalized strings accordingly
 *@a: this represent the string to be prited
 *Return: it shall print the capitalized string
 */
char *cap_string(char *a)
{
int x;
for (x = 0; a[x] != '\0'; x++)
{
if (a[0] > 96 && a[x] < 123)
{
a[0] = (a[0] - 32);
}
if (a[x] == '{' || a[x] == '}' || a[x] == '(' || a[x] == ')' || a[x] == '"' ||
a[x] == '?' || a[x] == '!' || a[x] == ',' ||
a[x] == ';' || a[x] == '\n' || a[x] == '\t' || a[x] == '.')
{
if (a[x + 1] > 96 && a[x + 1] < 123)
{
a[x + 1] = (a[x + 1] - 32);
}
}
}
return (a);
}
