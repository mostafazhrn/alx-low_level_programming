#include <stdio.h>
/**
 *main - this program shall print nos of args passed tp the prog
 *@argc: this represent the int of nos of args to be prnt
 *@argv: this represent char argv and its void
 *Return: it shall reurn zwro in success
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
