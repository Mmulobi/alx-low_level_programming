#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_print - Prints a hash table
  * @ht: The hash table to prints
  *
  * Return: Nothing!
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int b = 0;
	short commas = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; b < ht->size; ++b)
	{
		node = ht->array[b];

		while (node)
		{
			if (commas == 1)
				printf(", ");

			commas = 1;
			printf("'%s': '%s'", (char *) node->key,
								(char *) node->value);

			node = node->next;
		}
	}

	printf("}\n");
}
