#include <stdio.h>
/**
 *Description: main - print all nums of base 16
 *Return: it shal return 0 in success
 */
int main(void)
{
char x;
char y;
for (x = '0'; x <= '9'; ++x)
{
putchar(x);
}
for (y = 'a'; y <= 'f'; ++y)
{
putchar(y);
}
putchar('\n');
return (0);
}
