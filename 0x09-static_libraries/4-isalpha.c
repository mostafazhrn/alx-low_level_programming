#include "main.h"
/**
 *_isalpha - verify if a char is alpha or not
 *@c: verify characters and return
 *Return: it shall return 1 if alpha 0 if not
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
