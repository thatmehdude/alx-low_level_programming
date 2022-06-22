#include "main.h"
/**
 * _pow_recursion - raise x to the power y
 * @x: number
 * @y: power
 * Return: power of number, -1 if power is 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 0)
		return (1);
	else if (x == 1 || y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
