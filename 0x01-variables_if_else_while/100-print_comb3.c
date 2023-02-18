#include <stdio.h>

/**
 * main - Printing the combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tenth;
	int ones;

	for (tenth = '0'; tenth <= '9'; tenth++)
	{
		for (ones = (tenth + 1); ones <= '9'; ones++)
		{
			putchar (tenth);
			putchar (ones);
			if (tenth != '8' || ones != '9')
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}
