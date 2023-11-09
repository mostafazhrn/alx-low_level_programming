#include "lists.h"
/**
 *insert_dnodeint_at_index - this code shall insert node
 *@h: this shall represent start of pointer
 *@idx: this shall represent insertion of new nodes
 *@n: this shall represent the int of node
 *Return: this shall return add of null if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *cach = *h;
dlistint_t *nvo;
switch (idx == 0)
{
case 1:
return (add_dnodeint(h, n));
break;
}
while (idx != 1)
{
cach = cach->next;
switch (cach == NULL)
{
case 1:
return (NULL);
break;
}
idx--;
}
switch (cach->next == NULL)
{
case 1:
return (add_dnodeint_end(h, n));
break;
}
nvo = malloc(sizeof(dlistint_t));
switch (nvo == NULL)
{
case 1:
return (NULL);
break;
}
nvo->n = n;
nvo->prev = cach;
nvo->next = cach->next;
cach->next->prev = nvo;
cach->next = nvo;
return (nvo);
}
