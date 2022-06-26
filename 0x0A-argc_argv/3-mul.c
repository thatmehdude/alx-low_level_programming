#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie two numbers
 * @argc: number of command line arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
/* if the program does not receive two arguments,  program prints error */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
