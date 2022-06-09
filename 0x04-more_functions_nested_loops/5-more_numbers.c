#include "main.h"

/**
 * more_numbers - prints from 0 -14 ten times
 * followed by a new line
 *
 * Return: 0
 */
void more_numbers(void)
{
	char = num;
	int = lines;

	for (lines = '0'; lines <= '9'; lines ++)
	{
		for (num = 0; num <= 14; num ++)
		{
			if (num / 10 > 0)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
