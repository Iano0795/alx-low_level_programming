#include <stdio.h>

/**
 * isupper - checks for uppercase letters
 * @c: variable
 * Return: void
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

		return (0);
}
