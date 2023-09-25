#include "lists.h"
/**
 *delete_nodeint_at_index - this code shall del nodes
 *@head: this shall represent the add of lst
 *@index: this shall represent the nodes of lst
 *Return: it shall return 1 if success or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *cach;
unsigned int x = 0;
listint_t *cp = *head;
switch (cp == NULL)
{
case 1:
return (-1);
break;
}
switch (index == 0)
{
case 1:
*head = (*head)->next;
free(cp);
return (1);
break;
}
while (x < (index - 1))
{
if (cp->next == NULL)
{
return (-1);
}
cp = cp->next;
x++;
}
cach = cp->next;
cp->next = cach->next;
free(cach);
return (1);
}
