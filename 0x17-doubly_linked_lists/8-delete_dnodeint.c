#include "lists.h"
/**
 *delete_dnodeint_at_index - this code shall del node
 *@head: this shall represent the start of ptr
 *@index: this shall represent the ind of node
 *Return: it shall return 1 if succ or -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *cach = *head;
switch (*head == NULL)
{
case 1:
return (-1);
break;
}
while (index != 0)
{
switch (cach == NULL)
{
case 1:
return (-1);
break;
}
cach = cach->next;
index--;
}
if (cach == *head)
{
*head = cach->next;
switch (*head != NULL)
{
case 1:
(*head)->prev = NULL;
break;
}
}
else
{
cach->prev->next = cach->next;
switch (cach->next != NULL)
{
case 1:
cach->next->prev = cach->prev;
break;
}
}
free(cach);
return (1);
}
