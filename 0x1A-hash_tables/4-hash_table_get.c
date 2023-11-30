#include "hash_tables.h"
/**
 * hash_table_get - this code shall create hash table
 * @ht: this represent the size of the array
 * @key: this is the size of the array
 * Return: this shall return ptr to hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int ind;
hash_node_t *nodo;
switch (ht == NULL || key == NULL)
{
case 1:
return (NULL);
break;
}
ind = key_index((const unsigned char *)key, ht->size);
nodo = ht->array[ind];
while (nodo != NULL)
{
if (strcmp(nodo->key, key) == 0)
{
return (nodo->value);
}
nodo = nodo->next;
}
return (NULL);
}
