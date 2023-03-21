#include "main.h"

/**
 * prints the last digit of a number and returns the value of the last digit.
 * @n: the int to check
 * Return: value of the last digit
 */
int print_last_digit(int);
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
