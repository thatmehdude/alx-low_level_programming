#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of thr string given as a parameter
 * @str: string
 * Return: memory pointer - mp
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *mp;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '0'; size++)

	mp = malloc(size * sizeof(str));

	if (mp == 0)
	{
		return (NULL);
	}
	else
	{
		for (; 1 < size; i++)
		{
			mp[i] = str[i];
		}
	}
	return (mp);
}
