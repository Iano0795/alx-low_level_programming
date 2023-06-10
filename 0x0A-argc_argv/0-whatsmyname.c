#include <stdio.h>
#include "main.h"

/**
 * main - printing the name of the program
 * @argc: size of argv
 * @argv: array of pointers
 *
 * Return: success (0)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
