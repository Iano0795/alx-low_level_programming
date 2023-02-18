#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Printing numbers from 0 to 9 */
	char numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');

	return (0);
}
