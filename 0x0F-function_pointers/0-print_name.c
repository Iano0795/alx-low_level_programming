#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints the name
 * @name: character variable
 * @f: function name
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
