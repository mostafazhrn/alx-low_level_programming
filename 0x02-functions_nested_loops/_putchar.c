#include <unistd.h>
/**
 *_putchar - writes on this code to allows to write c to stdout
 *@c: is the character to print
 *Description: it prints the c to stdout then return in success
 *Return: this code shall return 1 in success, error -1
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
