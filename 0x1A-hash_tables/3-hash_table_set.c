#include "hash_tables.h"
/**
 * hash_table_set - this code shall create hash table
 * @ht: this represent the size of the array
 * @key: this is the size of the array
 * @value: this is the value of the key
 * Return: this shall return ptr to hash table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int ind;
hash_node_t *neuvo_nodo;
switch (ht == NULL || key == NULL || value == NULL)
{
case 1:
return (0);
break;
}
ind = key_index((const unsigned char *)key, ht->size);
neuvo_nodo = malloc(sizeof(hash_node_t));
switch (neuvo_nodo == NULL)
{
case 1:
return (0);
break;
}
neuvo_nodo->key = strdup(key);
neuvo_nodo->value = strdup(value);
neuvo_nodo->next = ht->array[ind];
ht->array[ind] = neuvo_nodo;
return (1);
}
