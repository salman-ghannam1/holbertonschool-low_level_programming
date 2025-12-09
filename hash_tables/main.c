#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - Entry point for testing the hash table creation
 *
 * Return: EXIT_SUCCESS on success
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);

	return (EXIT_SUCCESS);
}
