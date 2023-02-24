#include "main.h"

/**
 * print_most_numbers - print most numbers
 * Do not print 2 and 4.
 * followed by a new line.
 * Return: void
 */
void print_most_numbers(void)
{
	int c = '0';

	for (; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
