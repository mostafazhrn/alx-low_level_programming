#include <stdio.h>
#include "lists.h"
/**
 **add_nodeint - this code shall add node to LST
 *@head: thus shall represent the head of list
 *@n: this shall rpresent int of node
 *Return: it shall retrun add of elemt or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *x;
x = malloc(sizeof(listint_t));
if (x == NULL)
{
return (NULL);
}
x->n = n;
x->next = *head;
*head = x;
return (x);
}
