#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets ten times
 *
 * Return: Always 0 Success
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 1;
	while (i <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
