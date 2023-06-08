#include "main.h"

/**
 * verify - verify root
 * @a: interger
 * @b: Interger variable
 * Return: verified value
 */

int verify(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (verify(a + 1, b));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: the number we are finding the square root for
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (verify(1, n));
}
