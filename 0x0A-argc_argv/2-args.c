#include <stdio.h>
#include "main.h"

/**
 * main - prints all argumentsa
 * @argc: stores number of arguments
 * @argv: array of pointers
 *
 * Return: success (0)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
