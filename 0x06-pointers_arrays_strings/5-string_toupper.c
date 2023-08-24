#include "main.h"
/**
 **string_toupper - this code replace lower case with upper ones
 *@a: this represent int to be changed to upper
 *Return: it shall return the changed upper string
 */
char *string_toupper(char *a)
{
int b;
for (b = 0; a[b] != '\0'; b++)
{
if (a[b] >= 97 && a[b] < 123)
{
a[b] = a[b] - 32;
}
}
return (a);
}
