#include <unistd.h>

/**
 * main - printing one character
 * @c: character to be printed
 *
 * Return: returns a character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
