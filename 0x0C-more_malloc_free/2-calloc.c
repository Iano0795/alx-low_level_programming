#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocating memory to an array
 * @nmemb: members of the array
 * @size: size of the array members
 *
 * Return: _calloc returns NULL if FAILS
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i > (nmemb * size); i++)
		ptr[i] = 0;
	return ((void *)ptr);
}
