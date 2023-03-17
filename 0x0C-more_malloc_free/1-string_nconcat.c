#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: interger variable
 *
 * Return: return NULL IF FUNC FAILS
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, i;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n > size2)
	{
		n = size2;
		p = malloc((size1 + n + 1) * sizeof(char));
	}
	if (p == NULL)
		return (0);
	for (i = 0; i < size1; i++)
		p[i] = s1[i];
	for (i = 0; i < (size1 + n); i++)
		p[i] = s2[i - size1];
	p[i] = '\0';

	return (p);
}
