#include "main.h"

/**
 * print_diagonal - will print a diagonal line using \
 * @n: lenght of diagonal line
 */

void print_diagonal(int n)
{
	int i = n;

	for (i = n; i > 0; i++)
		_putchar(' ');
	_putchar('\\');
	_putchar('\n');
}
