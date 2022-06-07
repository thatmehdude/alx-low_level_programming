#include <stdio.h>
#include "main.h"

/**
 * main-prints alphabets in lowercase'
 * followed by a new line
 * Return:0
 */
void print_alphabet(void)

{
	char alphabets;

	alphabets = 'a';
	while (alphabets <= 'z');
	{
		_putchar(alphabets);
		alphabets++;
	}
	_putchar('\n');
}
