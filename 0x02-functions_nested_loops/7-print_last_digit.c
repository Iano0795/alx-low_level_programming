#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @l: character to be examined
 * Return: returns a value
 */
int print_last_digit(int l)
{
	int i = l % 10;

	if (i < 0)
		i *= -1;
	_putchar (i + '0');
	return (i);
}
