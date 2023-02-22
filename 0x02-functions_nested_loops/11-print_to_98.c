#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: variable
 * Return: Always 0 for success
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	_putchar('\n');
}
