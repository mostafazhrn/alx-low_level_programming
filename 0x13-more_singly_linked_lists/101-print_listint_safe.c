#include <stdlib.h>
#include "lists.h"
/**
 *lent - this code shall check for loop
 *@strt: this shall represent the head
 *@n: this shall represent the node
 *@m: this shall represent the position
 *Return: it shall return 1 if success zero if loop
 */
size_t lent(const listint_t *strt, const listint_t *n, size_t m)
{
size_t l;
for (l = 0; strt != n; l++)
{
strt = strt->next;
}
return ((l == m) ? 1 : 0);
}
/**
 *print_listint_safe - this code shall print LST
 *@head: this shall represent the start of node
 *Return: it shall return 98 exit or list if succ
 */
size_t print_listint_safe(const listint_t *head)
{
size_t x;
const listint_t *strt = head;
if (head)
{
for (x = 0; head && lent(strt, head, x); x++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
if (head)
{
printf("-> [%p] %d\n", (void *)head, head->n);
}
}
return (x);
}
