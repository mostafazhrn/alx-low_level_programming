#include "hash_tables.h"
/**
 * hash_table_create - this code shall create hash table
 * @size: this represent the size of the array
 * Return: this shall return ptr to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned int x = 0;
hash_table_t *nuevo_hash = malloc(sizeof(hash_table_t));
switch (size == 0)
{
case 1:
return (NULL);
break;
}
switch (nuevo_hash == NULL)
{
case 1:
return (NULL);
break;
}
nuevo_hash->size = size;
nuevo_hash->array = malloc(sizeof(hash_node_t *) * size);
switch (nuevo_hash->array == NULL)
{
case 1:
return (NULL);
break;
}
while (x < size)
{
nuevo_hash->array[x] = NULL;
x++;
}
return (nuevo_hash);
}
