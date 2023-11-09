#include "lists.h"
/**
 *sum_dlistint - this program shall get the sum of data
 *@head: this shall represent the start of ptr
 *Return: this shall return zero if list empty or the sum of elem
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *x = head;
int y = 0;
while (x)
{
y += x->n;
x = x->next;
}
return (y);
}
