#include "hash_tables.h"
/**
 * hash_table_get - this code get value with key
 * @ht: this represent the hash table
 * @key: this represent the key
 * Return: this shall return key of table
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
