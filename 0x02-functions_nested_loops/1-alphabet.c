#include <stdio.h>

/**
 * print_alphabet - print lowercase alphabet
 * Return: 0
 */

int main(void)
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
