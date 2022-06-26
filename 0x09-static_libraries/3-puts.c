#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: pointer to the string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
