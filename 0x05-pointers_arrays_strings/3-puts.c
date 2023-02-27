#include "main.h"

/**
 * _puts - displaying a string 
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
