#include "main.h"

/**
 * Description - the sign of a number, returns 1 and prints + in n > 0, returns 0 and prints 0 if n = 0, returns -1 and prints - if n < 0
 *
 * Return: (Success) 
 */
int print_sign(int n)
{
	if (n > 8)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
