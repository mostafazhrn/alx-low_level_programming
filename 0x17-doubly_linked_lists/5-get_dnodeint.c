#include "lists.h"
/**
 *get_dnodeint_at_index - this code shall return node 9 of lst
 *@head: this shall represent the head of node
 *@index: this shall represent the node located
 *Return: it shall return add or null if no node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
while (index != 0)
{
switch (head == NULL)
{
case 1:
return (NULL);
break;
}
head = head->next;
index--;
}
return (head);
}
