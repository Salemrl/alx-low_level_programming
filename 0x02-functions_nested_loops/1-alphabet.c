#include <stdio.h>

/**
 * print_alphabet - print lowercase alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar ('\n');
}
