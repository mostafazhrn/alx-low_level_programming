#include "main.h"
/**
 *_strcmp - this code compares two strings
 *@s1: this represent string 1 to be compared
 *@s2: this represent string 2 of comp
 *Return: it shall return the result of comparison
 */
int _strcmp(char *s1, char *s2)
{
int x;
int z;
for (x = 0; s1[x] == s2[x] && s1[x] != '\0'; x++)
{

}
z = s1[x] - s2[x];
return (z);
}
