#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 *
 * @src: source of memory area
 * @dest: destination of memory area
 * @n: number of bytes to copy
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
