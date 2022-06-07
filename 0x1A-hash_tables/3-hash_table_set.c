#include"hash_tables.h"
/**
 * hash_table_set - add item to the table
 * @ht: table entry
 * @key: table key
 * @value: key value
 * Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *elem = NULL;
char *value = NULL;
unsigned long int index = 0,
i = 0;
if (!ht || !key || !*key || value == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
value = strdup(value);
if (!value)
return (0);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = value;
return (1);
}
}

elem = malloc(sizeof(hash_node_t));
if (!elem)
{
free(value);
return (0);
}
elem->key = strdup(key);
if (!elem->key)
{
free(elem);
return (0);
}
elem->value = value;
elem->next = ht->array[index];
ht->array[index] = elem;

return (1);
}
