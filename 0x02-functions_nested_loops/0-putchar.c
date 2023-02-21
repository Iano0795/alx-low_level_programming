#include <unistd.h>

/** 
 * main - Program to display _putchar
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	char put[8] = "_putchar";
	int i;
	for (i = 0; i < put[i]; i++)
	{
		_putchar(put[i]);
	}
	_putchar('\n');
	return (0);
}
