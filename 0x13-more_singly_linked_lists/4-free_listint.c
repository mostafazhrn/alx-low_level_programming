#include <stdio.h>
#include "lists.h"
/**
 *free_listint - this code shall free the lst
 *@head: this shall represent the start of LST
 *Return: it shall return the freed lsit
 */
void free_listint(listint_t *head)
{
listint_t *cach;
for (; head; head = cach)
{
cach = head->next;
free(head);
}
}
