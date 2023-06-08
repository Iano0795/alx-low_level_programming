#include "main.h"

/**
 * _strlen_recursion - length of the string
 * @a: string
 * Return: interger
 */

int _strlen_recursion(char *a)
{
	int i = 0;
	if (*a != '\0')
	{
		i++;
		i += _strlen_recursion(a + 1);
	}
	return(i);
}
