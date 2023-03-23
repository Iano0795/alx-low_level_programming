#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all option arguments
 * @n: first required arg
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int total;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	total = 0;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			total += va_arg(ap, int);
		return (total);
	}

	return (0);
}
