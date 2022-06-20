#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 * Return: number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bool = 1;
				break;
			}
		}
		if (bool == 0)
		{
			break;
		}
	}
	return (i);
}
