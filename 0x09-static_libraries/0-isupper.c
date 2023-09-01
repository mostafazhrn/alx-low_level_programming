#include "main.h"
/**
 *_isupper - this prog. check if char is upper or lower
 *@c: the char to be checked
 *Return: it shall return the letter is upper or lower
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
