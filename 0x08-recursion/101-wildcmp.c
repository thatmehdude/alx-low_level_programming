#include "main.h"

int cmp(char *c1, char *c2);

/**
 * escwild - escapes wild card
 * @c1: string 1
 * @wild: string 2
 * Return: go through string 1 until match or '\0' is found
 */
int escwild(char *c1, char *wild)
{
	if (*c1 == '\0')
		return (cmp(c1, wild));
	return (cmp(c1, wild) || escwild(++c1, wild));
}

/**
 * cmp - cpmpares strings
 * @c1: string 1
 * @c2: string 2
 * Return: 1 if match and 0 if o match
 */
int cmp(char *c1, char *c2)
{
	if (*c1 == *c2 || *c2 == '*')
	{
		if (*c2 == '*')
			return (escwild(c1, ++c2));
		else if (*c1 == '\0')
			return (1);
		else
			return (cmp(++c1, ++c2));
	}
	return (0);
}

/**
 * wildcmp - compares  strings
 * @s1: string 1
 * @s2: string 2
 * Return: return 0 if no match and 1 if match
 */
int wildcmp(char *s1, char *s2)
{
	return (cmp(s1, s2));
}
