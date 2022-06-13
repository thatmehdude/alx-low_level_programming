#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (length >= 0)
	{
		if (s[length] == '\0')
			break;
		length++;
	}

	for (length--; length>= 0; length--)
		_putchar(s[count]);
	_putchar('\n');
}
