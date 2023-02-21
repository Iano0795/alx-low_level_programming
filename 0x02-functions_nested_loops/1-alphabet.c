#include "main.h"

/**
 * main - program to print alphabet in lowercase
 *
 * Return: Always 0 Success
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

	return (0);
}
