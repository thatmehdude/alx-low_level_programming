#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: parameter
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
