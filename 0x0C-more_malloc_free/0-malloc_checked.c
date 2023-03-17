#include "main.h"

/**
 * malloc_checked - checks for memory allocation
 *
 * @b: allocated memory
 *
 * Return: Returns memory allocated
 */

int *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit (98);
	}

	return (i);
}
