#include "main.h"
/**
 *_strlen_recursion - this code shall print the length of a str
 *@s: this represent the stringlen to be counted
 *Return: it shall retunr the len of a str
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (_strlen_recursion(s + 1) + 1);
}
