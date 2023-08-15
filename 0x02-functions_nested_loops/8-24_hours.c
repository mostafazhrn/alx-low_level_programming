#include "main.h"
/**
 *jack_bauer - this code prints every hour of the day using putchar
 *Return: it shall return 0 in success
 */
void jack_bauer(void)
{
int x;
int y;
for (x = 0; x < 24; x++)
{
for (y = 0; y < 60; y++)
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
_putchar(':');
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
_putchar('\n');
}
}
}
