#include <stdlib.h>
#include "lists.h"
/**
 **get_nodeint_at_index - this code the get nodes of LST
 *@head: this shall represent the head of LSt
 *@index: this shall represent the node start
 *Return: it shall return NUll or location if so
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
while (x < index)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
x++;
}
return (head);
}
