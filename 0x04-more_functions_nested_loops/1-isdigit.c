#include "main.h"

/**
 * _isdigit - checks digits
 * @c: variable
 * Return: void
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
