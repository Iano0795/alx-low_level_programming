#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @a: string variable
 * Return: 0
 */

void _print_rev_recursion(char *a)
{
	if (*a != '\0')
	{
		_print_rev_recursion(a + 1);
		_putchar(*a);
	}
}
