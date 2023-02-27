#include "main.h"

/**
 * _puts - displaying a string 
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		puts(*str++);
	}

	puts('\n');
}
