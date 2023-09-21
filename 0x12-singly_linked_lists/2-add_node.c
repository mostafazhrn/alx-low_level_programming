#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 **add_node - this code shall add new node
 *@head: this hsall represent the head of list
 *@str: this shall represnt the str addedd to lst
 *Return: it shall return 0 in fail or list in success
 */
list_t *add_node(list_t **head, const char *str)
{
char *upe;
int x = 0;
list_t *nuevo;
nuevo = malloc(sizeof(list_t));
if (nuevo == NULL)
{
return (NULL);
}
upe = strdup(str);
if (upe == NULL)
{
free (nuevo);
return (NULL);
}
while (str[x])
{
x++;
}
nuevo->str = upe;
nuevo->len = x;
nuevo->next = *head;
*head = nuevo;
return (nuevo);
}
