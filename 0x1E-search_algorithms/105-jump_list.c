#include "search_algos.h"
#include <math.h>
/**
 * jump_list - THis code shall search arry of ints using jump algo
 * in singly linked lst
 * @list: This shall represent the ptr to 1st elem of array
 * @size: THis shall rep the num of elems in array
 * @value: This shall rep the value to search for
 * Return: This shall return ind of valu or null if not present
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t stp;
size_t sz_stp;
listint_t *nd;
listint_t *nxt;
if (list == NULL || size == 0)
return (NULL);
stp = 0;
sz_stp = sqrt(size);
nxt = list;
while (nxt->next != NULL && nxt->n < value)
{
nd = nxt;
for (stp = 0; nxt->next != NULL && stp < sz_stp && nxt->n < value; stp++)
{
nd = nxt;
nxt = nxt->next;
}
printf("Value checked at index [%d] = [%d]\n", (int)nxt->index, nxt->n);
}
printf("Value found between indexes [%d] and [%d]\n",
(int)nd->index, (int)nxt->index);
for (; nd->index < size && nd->index <= nxt->index; nd = nd->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)nd->index, nd->n);
if (nd->n == value)
return (nd);
}
return (NULL);
}
