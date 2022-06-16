#include "main.h"

/**
 * _strcmp - compares to strings
 * @s: first string to compare
 * @s2: second string to compare
 *
 * Retrun: less than 0 if s1 is less than s2,
 * 0 if they're equal or more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}