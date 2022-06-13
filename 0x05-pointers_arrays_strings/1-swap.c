#include "main.h"

/**
 * swap_int - resets the value of two integers
 * @a: integer a
 * @b: integer b
 * Return: 0 success
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
