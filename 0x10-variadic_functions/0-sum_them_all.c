#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to add of all its parameters
 * @n: function argument
 *
 * Return: return the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < ap; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
