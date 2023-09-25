#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - this code shall free the list
 *@head: this shall represent the head of the lst
 *Return: it shall return NULL in success
 */
void free_listint2(listint_t **head)
{
listint_t *cach;
if (head == NULL)
{
return;
}
for (; *head; *head = cach)
{
cach = (*head)->next;
free(*head);
}
head = NULL;
}
