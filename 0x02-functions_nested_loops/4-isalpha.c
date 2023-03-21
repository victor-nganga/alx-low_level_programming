#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 if the character is a letter lowercase or uppercase  0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

