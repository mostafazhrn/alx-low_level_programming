#include "lists.h"
/**
 *print_dlistint - this code shall print elem of lst
 *@h: this shall represent ptr
 *Return: this hsall return nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t x = 0;
for (; h; h = h->next)
{
x++;
printf("%d\n", h->n);
}
return (x);
}
