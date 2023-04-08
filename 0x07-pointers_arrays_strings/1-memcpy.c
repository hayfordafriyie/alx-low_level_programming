#include "main.h"
#include <stdio.h>

/**
 * _memcpy - _memcpy() function copies n bytes from src to dest
 * @dest: memory area
 * @src: memory area
 * @n: integer
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
