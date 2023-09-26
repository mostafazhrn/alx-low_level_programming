#include <stdlib.h>
#include "lists.h"
/**
 *lop_listint - this code shall count num of nod
 *@strt: this shall represent the head of LST
 *Return: it shall return list or zero if loop
 */
size_t lop_listint(listint_t *strt)
{
listint_t *x;
listint_t *y;
size_t z = 1;
switch (strt == NULL || strt->next == NULL)
{
case 1:
return (0);
break;
}
x = strt->next;
y = (strt->next)->next;
for (; y; y = (y->next)->next)
{
if (x == y)
{
x = strt;
for (; x != y; y = y->next)
{
z++;
x = x->next;
}
x = x->next;
for (; x != y; x = x->next)
{
z++;
}
return (z);
}
x = x->next;
}
return (0);
}
/**
 *free_listint_safe - this code shall free the lst
 *@h: this shall represent the head of ptr
 *Return: it shall return size of lst
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *cach;
size_t z;
size_t a = 0;
z = lop_listint(*h);
if (z == 0)
{
while (h != NULL && *h != NULL)
{
cach = (*h)->next;
free(*h);
*h = cach;
z++;
}
}
else
{
while (a < z)
{
cach = (*h)->next;
free(*h);
*h = cach;
a++;
}
*h = NULL;
}
h = NULL;
return (z);
}
