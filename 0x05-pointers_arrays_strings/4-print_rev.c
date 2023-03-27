#include "main.h"

/**
 * print_rev(char *s) - prints a string in reverse followed by a newline
 * @s: the string to be printed in reverse
 */
void print_rev(char *s)

{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1 ; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
