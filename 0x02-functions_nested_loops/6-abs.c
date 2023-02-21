#include "main.h"

/**
 * _abs - absolute value of an integer
 * @i: chracter to be verified
 * Return: Returns a certain value
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
