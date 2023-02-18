#include <stdio.h>

/**
 * main - Printing all cominations of a 3 digit number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundredth;
	int tenth;
	int ones;

	for (hundredth = '0'; hundredth <= '9'; hundredth++)
	{
		for (tenth = (hundredth + 1); tenth <= '9'; tenth++)
		{
			for (ones = (tenth + 1); ones <= '9'; ones++)
			{
				putchar (hundredth);
				putchar (tenth);
				putchar (ones);
				if (hundredth != '7' || tenth != '8' || ones != '9')
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
