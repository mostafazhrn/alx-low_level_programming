#include "main.h"
/**
 *binary_to_uint - this code shall convert binary num to int
 *@b: this shall represent the str of binary
 *Return: it shall retrun 0 or the nums converted
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int x;
switch (b == NULL)
{
case 1:
return (0);
break;
}
for (x = 0; *b != '\0'; b++)
{
x = x << 1;
if (*b != '1' && *b != '0')
{
return (0);
}
else if (*b == '1')
{
x = x | 1;
}
}
return (x);
}
