#include "main.h"
/**
 *print_chessboard - this program prints the figure ofchessboard
 *@a: this represents the string of one of dimensional arryas
 *Return: it shall return the chessboard printed
 */
void print_chessboard(char (*a)[8])
{
int x;
int y;
for (x = 0; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
_putchar(a[x][y]);
}
_putchar('\n');
}
}
