#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 **add_node_end - this code shall add new nodes
 *@head: this shall represent the head of list
 *@str: this hsall represent the strs to put in lst
 *Return: it shall return void in fail or the put list
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *upe;
int x = 0;
list_t *nuevo;
list_t *ultim;
nuevo = malloc(sizeof(list_t));
if (nuevo == NULL)
{
return (NULL);
}
upe = strdup(str);
if (str == NULL)
{
free(nuevo);
return (NULL);
}
while (str[x])
{
x++;
}
nuevo->str = upe;
nuevo->len = x;
nuevo->next = NULL;
if (*head == NULL)
{
*head = nuevo;
}
else
{
ultim = *head;
while (ultim->next != NULL)
{
ultim = ultim->next;
}
ultim->next = nuevo;
}
return (*head);
}
