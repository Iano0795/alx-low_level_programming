#include <stdio.h>
#include "main.h"

/**
 * main - printing on arguments 
 *
 * @argc: shows the number of arguments supplied
 * @argv: array of pointers
 *
 * Return: success(0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
