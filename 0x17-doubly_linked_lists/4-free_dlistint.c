#include "lists.h"
/**
 *free_dlistint - this code shall free the list
 *@head: this shall represent the start of ptr
 *Return: it shall return the freed list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *x;
while (head)
{
x = head->next;
free(head);
head = x;
}
}
