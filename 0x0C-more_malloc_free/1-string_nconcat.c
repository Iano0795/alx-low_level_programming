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
	unsigned int len1 = 0, len2 = 0, total_len;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		total_len = len1 + len2;
	else
		total_len = len1 + n;

	str = malloc(sizeof(char) * (total_len + 1));

	if (str == NULL)
		return (NULL);
	for (int i = 0; i < len1; i++)
		str[i] = s1[i];
	if (n >= len2)
	{
		for (int i = 0; i < len2; i++)
			str[len1 + i] = s2[i];
	}
	else
	{
		for (int i = 0; i < n; i++)
			str[len1 + i] = s2[i];
	}
	str[total_len] = '\0';

	return (str);
}
