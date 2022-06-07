#include "hash_tables.h"
/**
 *hash_table_delete - function that deletes a hash table
 *@ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *tmp;
unsigned long int counter = 0;

for (counter = 0; counter < ht->size; counter++)
{
node = ht->array[counter];
while (node != NULL)
{
tmp = node;
node = node->next;
free(tmp->key);
free(tmp->value);
free(tmp);
}
}
free(ht->array);
free(ht);
}
