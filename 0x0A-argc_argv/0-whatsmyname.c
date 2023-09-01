#include <stdio.h>
/**
 *main - this program prints its name
 *@argc: this represent the int argc void
 *@argv: this represent the char to print prog name
 *Return: in success it shall retrun zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
