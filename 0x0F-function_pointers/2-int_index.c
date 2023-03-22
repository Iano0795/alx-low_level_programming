#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an interger
 * @array: its the name of the array
 * @size: is the number of elements in the array
 * @cmp: function that compares the values in the array
 * Return: 0 for success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
		if (array != NULL && cmp != NULL)
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
	return (-1);
}
