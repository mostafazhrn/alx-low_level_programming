#include "lists.h"
/**
 *list_len - this code shall return num of elements in linktLst
 *@h: this shall represent the list to be put
 *Return: it shall return the elements of list
 */
size_t list_len(const list_t *h)
{
size_t x;
for (x = 0; h; x++)
{
h = h->next;
}
return (x);
}
