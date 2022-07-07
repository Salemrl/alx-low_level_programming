#include "main.h"

/**
 * more_numbers - will print numbers from 0 to 14, 10 times
 */

void more_numbers(void)
{
	char i;
	char j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
			_putchar(i);
	}
	_putchar('\n');
}
