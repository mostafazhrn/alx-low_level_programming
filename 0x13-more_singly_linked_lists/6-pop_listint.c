#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint - this code shall delete nodes
 *@head: this shall represent the head of LST
 *Return: it shall return zero if empty
 */
int pop_listint(listint_t **head)
{
int x;
listint_t *cach;
if (*head == NULL)
{
return (0);
}
cach = *head;
x = (*head)->n;
*head = (*head)->next;
free(cach);
return (x);
}
