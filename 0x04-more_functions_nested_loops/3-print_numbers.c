#include "main.h"
/**
 * print_numbers - prints numbers from 0 - 9
 * followed by a new line
 * Return: 0
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
		_putchar(i);
		i++;

	_putchar('\n');
}
