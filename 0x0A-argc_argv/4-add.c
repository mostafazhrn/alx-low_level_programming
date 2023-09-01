#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 *main - this program shall print the addition of two ints
 *@argc: this shall represent the args to be summed
 *@argv: this represent the variables of args
 *Return: it shall return zero in sucess
 */
int main(int argc, char *argv[])
{
int addition = 0;
int x = 1;
if (argc == 1)
{
printf("0\n");
}
if (argc > 1)
{
while (x < argc)
{
char *y = argv[x];
while (*y)
{
if (!isdigit(*y))
{
printf("Error\n");
return (1);
}
y++;
}
addition = addition + atoi(argv[x]);
x++;
}
printf("%d\n", addition);
}
return (0);
}
