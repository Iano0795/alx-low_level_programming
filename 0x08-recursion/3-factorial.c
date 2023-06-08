#include "main.h"

/**
 * factorial - prints factorial of a number
 * @n: the number
 * Return: the factorial of the number
 */

int factorial(int n)
{
	int Factorial;

	if (n == 0)
	{
		return (1);
	}
	else if(n < 0)
	{
		return (-1);
	}
	else
	{
		Factorial = n * factorial(n - 1);
	}
	return (Factorial);
}
