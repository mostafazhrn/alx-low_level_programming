#include "main.h"
#include <stdio.h>
/**
 *main - this program prints _putchar using putchar command
 *Description: main - print the char wihtout using printf or puts
 *Return: it shall return 0 in success
 */
int main(void)
{
char sttmt[] = "_putchar";
int x = 0;
while (x < 8)
{
_putchar(sttmt[x]);
x++;
}
putchar('\n');
return (0);
}
