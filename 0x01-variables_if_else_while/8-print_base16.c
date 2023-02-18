#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Printing the hex numbers in lowercase */
	int n = '0';
	int a2f = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (a2f <= 'f')
	{
		putchar(a2f);
		a2f++;
	}
	putchar('\n');

	return (0);
}
