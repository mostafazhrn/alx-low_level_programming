#include "hash_tables.h"
/**
 * hash_table_delete - this code shall delete hash table
 * @ht: this represent the hash table
 * Return: this shall return nothing
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int x = 0;
hash_node_t *nodo = NULL;
hash_node_t *tempo = NULL;
switch (ht == NULL)
{
case 1:
return;
break;
}
for (; x < ht->size; x++)
{
nodo = ht->array[x];
while (nodo != NULL)
{
tempo = nodo;
nodo = nodo->next;
free(tempo->key);
free(tempo->value);
free(tempo);
}
}
free(ht->array);
free(ht);
}
