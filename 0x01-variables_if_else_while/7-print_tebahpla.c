#include <stdio.h>
/**
 *Description: main - this code prints z-a reverse
 *Return: it shall return 0 in success
 */
int main(void)
{
char x;
for (x = 'z'; x >= 'a'; --x)
{
putchar(x);
}
putchar('\n');
return (0);
}
