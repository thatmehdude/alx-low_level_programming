#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * while replacing multiples of 3 with fizz,
 * multiples of 5 with buzz, and multipes of both 3 and 5 with fizzbuzz
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		else
		{
			printf(" %d", i);
		}
	}
	prinf('\n');

	return (0);
}


