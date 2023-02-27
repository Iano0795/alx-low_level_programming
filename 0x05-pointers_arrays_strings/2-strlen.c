#include "main.h"

/**
 * _strlen - getting the length of the string
 * @s: string variable 
 * Return: void
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	{
		inc++;
	}

	return (inc);
}
