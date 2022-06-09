#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9
 * except 2 and 4
 * followed by a new line
 * Return: 0
 */
void print_most_numbers(void)
{
	char i = '0';

	while i(i <= '9')
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
