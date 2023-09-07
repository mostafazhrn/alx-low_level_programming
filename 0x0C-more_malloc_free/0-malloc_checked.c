#include <stdlib.h>
#include "main.h"
/**
 **malloc_checked - this program shall locate memorire using malloc
 *@b: this represents the int to of mem to be located
 *Return: it shall return the ptr to mem or 98 in failure
 */
void *malloc_checked(unsigned int b)
{
unsigned int *x = malloc(b);
if (x == NULL)
{
exit(98);
}
return (x);
}
