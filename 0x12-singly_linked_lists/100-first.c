#include <stdio.h>
#include <stdlib.h>
void __attribute__((constructor)) funct(void);
/**
 *funct - this code shall put the str before main
 *Return: it shall return the prnt line
 */
void funct(void)
{
printf("You're beat! and yet, you must allow,\n"
" I bore my house upon my back!\n");
}
