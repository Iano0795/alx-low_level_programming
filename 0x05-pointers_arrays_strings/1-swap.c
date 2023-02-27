#include "main.h"

/**
 * swap_int - swapping two variables values
 * @a: the first variable
 * @b: the second variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
