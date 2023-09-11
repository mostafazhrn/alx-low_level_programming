#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - this code shall free the dogs
 *@d: this represent the dogs to be let out
 *Return: it shall retrun zero in sucess
 */
void free_dog(dog_t *d)
{
if (d)
{
if ((*d).name)
{
free((*d).name);
}
if ((*d).name)
{
free((*d).owner);
}
free(d);
}
}
