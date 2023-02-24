#include "main.h"

/**
 * print_most_numbers - prnt most numbers
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c);
		}
	}

	_putchar(10);
}
