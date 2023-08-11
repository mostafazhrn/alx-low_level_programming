#include <stdio.h>
/**
 *Description: main - this code prints out numbers
 *Return: in success it shall return 0
 */
int main(void)
{
int m;
for (m = '0'; m <= '9'; ++m)
{
putchar(m);
}
putchar('\n');
return (0);
}
