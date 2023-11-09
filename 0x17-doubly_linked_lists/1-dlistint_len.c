#include "lists.h"
/**
 *dlistint_len - this code shall retirrve num of elem
 *@h: this shall represent the ptr
 *Return: it shall return the element
 */
size_t dlistint_len(const dlistint_t *h)
{
int x;
for (x = 0; h; h = h->next)
{
x++;
}
return (x);
}
