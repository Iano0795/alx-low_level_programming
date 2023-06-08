#include "main.h"

/**
 * verify - verifying if its a prime number or its a lie
 * @c: interger
 * @d: interger
 * Return: an iterger variable is returned
 */

int verify(int c, int d)
{
	if (d < 2 || d % c == 0)
		return (0);
	else if (c > d / 2)
		return (1);
	else
		return (verify(c + 1, d));
}

/**
 * is_prime_number - final decision maker
 * @n: the interger
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (verify(2, n));
}
