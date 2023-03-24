#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: number of underscores to print
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (n = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
