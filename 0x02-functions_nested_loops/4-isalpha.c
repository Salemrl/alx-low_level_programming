#include "main.h"

/**
 * _isapplha - checls for alphabet character
 * @c: character to checl
 * Return: 1 if lower or uppercase, 0 if not alphbaet character
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
