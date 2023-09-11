#include <stdio.h>
#include "dog.h"
/**
 *print_dog - this code shall shall print dog struct
 *@d: this represent the struct to be printed
 *Return: it shall return zero in success
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
}
}
