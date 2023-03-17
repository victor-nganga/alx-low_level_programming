#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;
	char l;

	for (l = 0; l < 10; l++)
		putchar(l + '0');
	for (l = 'a';l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
