#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string.
 * @c: character in a string s
 * @s: string
 * Return: a pointer to c, or NULL
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; s++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}

	return ('\0');
}
