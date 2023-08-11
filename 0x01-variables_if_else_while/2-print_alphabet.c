#include <stdio.h>
/**
 *Description: main - this code prints A-z
 *Return: in success it shall return 0
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; ++x)
{
putchar(x);
}
putchar('\n');
return (0);
}
