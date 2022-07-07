#include "main.h"

/**
 * print_line - will print a line
 * @n: length of the line
 */

void print_line(int n)
{
	int i = n;

	for (i = n; i > 0; i--)
		_putchar('_');

	_putchar('\n');
}
