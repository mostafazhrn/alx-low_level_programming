#include <stdlib.h>
#include "lists.h"
/**
 *free_list - this code shall free the list
 *@head: this shall represent the head of lst to be freed
 *Return: it shall return the freed lst
 */
void free_list(list_t *head)
{
list_t *x;
while (head)
{
x = head->next;
free(head->str);
free(head);
head = x;
}
}
