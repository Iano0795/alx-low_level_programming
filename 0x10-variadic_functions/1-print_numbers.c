#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - printing numbers separated by a comma
 * @separator: the separator character
 * @n: numbers of arguments
 * Return: 0 for success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i != n - 1)
				printf("%s ", separator);
		}
	}
	va_end(ap);

	putchar('\n');
}
