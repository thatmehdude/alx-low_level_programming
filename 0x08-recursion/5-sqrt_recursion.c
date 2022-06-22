#include "main.h"
/**
 * find_root - function to find square root of num
 * @x: numbeer
 * @root: number num
 * Return: reeturn
 */
int find_root(int n)
{
	if (root * root > x)
		return (-1);
	else if (root * root == x)
		return (root);
	else
		return (find_root(x, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * Return: natural suare root, of -1 if not natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
