#include "lists.h"
/**
 *add_dnodeint_end - this code shall add new node
 *@head: this shall represent the start of ptr
 *@n: this shall represent the new node
 *Return: it shall return address of elem or null if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *nvo;
dlistint_t *x = *head;
nvo = malloc(sizeof(dlistint_t));
switch (nvo == NULL)
{
case 1:
return (NULL);
break;
}
nvo->n = n;
nvo->next = NULL;
if (x)
{
while (x->next)
x = x->next;
nvo->prev = x;
x->next = nvo;
}
else
{
*head = nvo;
nvo->prev = NULL;
}
return (nvo);
}
