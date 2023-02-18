#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print the alphabets both caps and small */
	char sm_alpha = 'a';
	char big_alpha = 'A';

	while (sm_alpha <= 'z' && big_alpha <= 'Z')
	{
		putchar(sm_alpha);
		sm_alpha++;
	}
	while (big_alpha <= 'Z')
	{
		putchar(big_alpha);
		big_alpha++;
	}
	putchar('\n');

	return (0);
}
