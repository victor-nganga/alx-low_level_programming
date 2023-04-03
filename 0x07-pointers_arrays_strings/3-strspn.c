#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: String where substring will look
 * @accepted: substring of accepted chars
 *
 * Return: length of occurence
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned  int c = 0;
	char *t = accept;

	while (s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
