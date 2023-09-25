#include <stdlib.h>
#include "lists.h"
/**
 *sum_listint - this code shall return the sum of data
 *@head: this shall represent the start of LST
 *Return: this shall return zero if empty or sum
 */
int sum_listint(listint_t *head)
{
int x;
for (x = 0; head; head = head->next)
x += head->n;
return (x);
}
