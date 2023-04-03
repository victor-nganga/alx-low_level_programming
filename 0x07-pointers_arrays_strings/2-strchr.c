#include "main.h"

/**
 * _strchr - locates a character in a string and prints it
 * @s: pointer to char
 * @c: char params to find
 *
 * Return: A pointer or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);

}
