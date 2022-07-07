#include "main.h"

/**
 * print_diagonal - will print a diagonal line using \
 * @n: lenght of diagonal line
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i > n; i++)
		_putchar(' ');

	_putchar('\\');
	
	_putchar('\n');
}
