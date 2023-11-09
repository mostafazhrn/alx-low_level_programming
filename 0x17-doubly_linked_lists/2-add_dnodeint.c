#include "lists.h"
/**
 *add_dnodeint - this code shall add new nodes to lst
 *@head: this shall represent the start of lst
 *@n: this shall represent the new node
 *Return: it shall return new elem or null if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nvo;
nvo = malloc(sizeof(dlistint_t));
switch (nvo == NULL)
{
case 1:
return (NULL);
break;
}
nvo->n = n;
nvo->prev = NULL;
nvo->next = *head;
if (*head)
{
(*head)->prev = nvo;
}
*head = nvo;
return (nvo);
}
