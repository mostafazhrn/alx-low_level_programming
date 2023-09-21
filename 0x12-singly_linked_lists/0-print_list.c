#include "lists.h"
#include <stdio.h>
/**
 *print_list - this code shall prinbt the elemnt of lists
 *@h: this shall represent the linked lst
 *Return: it shall return the printed lsts
 */
size_t print_list(const list_t *h)
{
size_t x = 0;
for (; h; x++)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (x);
}
