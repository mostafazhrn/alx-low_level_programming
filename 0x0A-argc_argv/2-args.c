#include <stdio.h>
/**
 *main - this program shall prints all args
 *@argc: this represent the int of args to be printed
 *@argv: this represent the char to printed
 *Return: it hsall return zero in sucess
 */
int main(int argc, char *argv[])
{
int a = 0;
while (a < argc)
{
printf("%s\n", argv[a]);
a++;
}
return (0);
}
