#include <stdio.h>

/**
 * main - Prints all the alphabet except 'q' and 'e' in lowercase
 *        followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                if (ch != 'e' && ch != 'q')
                        putchar(ch);
        }
        putchar('\n');
        return (0);
}

