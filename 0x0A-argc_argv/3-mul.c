#include <stdlib.h>
#include <stdio.h>
/**
 *main - this program shall print the mul of two ints
 *@argc: this represtn the int to be printed
 *@argv: this rperesnt the str to be mult
 *Return: it hsall return zero in success
 */
int main(int argc, char *argv[])
{
int mult;
if (argc == 3)
{
mult = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n", mult);
}
else if (argc < 3)
{
printf("Error\n");
return (1);
}
return (0);
}
