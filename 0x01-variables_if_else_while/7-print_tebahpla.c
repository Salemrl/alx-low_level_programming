#include <stdio.h>

/**
 * main - print alphabets reverse order
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ahpla = 'z';

	while (ahpla >= 'a')
	{
		putchar(ahpla);
		ahpla--;
	}
	putchar('\n');
	return (0);
}
