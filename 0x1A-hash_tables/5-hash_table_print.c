#include "hash_tables.h"
/**
 * hash_table_print - this code shall print hash table
 * @ht: this represent the hash table
 * Return: this shall return nothing
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int x = 0;
hash_node_t *nodo = NULL;
char *coma = "";
switch (ht == NULL)
{
case 1:
return;
break;
}
printf("{");
while (x < ht->size)
{
nodo = ht->array[x];
while (nodo != NULL)
{
printf("%s'%s': '%s'", coma, nodo->key, nodo->value);
coma = ", ";
nodo = nodo->next;
}
x++;
}
printf("}\n");
}
