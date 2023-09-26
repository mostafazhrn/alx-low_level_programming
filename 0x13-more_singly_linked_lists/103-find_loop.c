#include <stdlib.h>
#include "lists.h"
/**
 **find_listint_loop - this code shall find loop
 *@head: this shall represent the start of lst
 *Return: it shall return address or nULL if loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *x;
listint_t *y;
switch  (head == NULL || head->next == NULL)
{
case 1:
return (NULL);
break;
}
x = head->next;
y = (head->next)->next;
for (; y; y = (y->next)->next)
{
if (x == y)
{
x = head;
while (x != y)
{
x = x->next;
y = y->next;
}
return (x);
}
x = x->next;
}
return (NULL);
}
