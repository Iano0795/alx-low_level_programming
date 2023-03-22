#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - printing the array of pointers to functions
 * @array: the array
 * @size: the size of array
 * @action: functions to act upon
 * Return:Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
