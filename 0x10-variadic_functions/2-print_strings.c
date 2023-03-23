#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - printing strings that are passed as arguments
 * @separator: character that separates the strings
 * @n: number of passed arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char*);
			if (str != NULL)
			{
				printf("%s", str);
				if (i != n - 1)
					printf("%s ", separator);
			}
			else
				printf("(nil)");
		}
	}

	putchar('\n');
}
