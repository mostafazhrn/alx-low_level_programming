#include <stdlib.h>
#include "lists.h"
/**
 **reverse_listint - this code shall rev Lst
 *@head: this shall represent the start of lst
 *Return: it shall return ptr to node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *a;
listint_t *z;
switch (head == NULL || *head == NULL)
{
case 1:
return (NULL);
break;
}
z = NULL;
for (; (*head)->next != NULL; *head = a)
{
a = (*head)->next;
(*head)->next = z;
z = *head;
}
(*head)->next = z;
return (*head);
}
