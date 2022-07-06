#include <stdio.h>

/**
 * main - will print numbers from 000 to 99
 * Return: always 0 (Success)
 */

int main(void)
{
	int ones;
	int tens;
	int hundreds;

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = (hunderds + 1); tens <= '9'; tens++)
		{
			for (ones = (tens + 1); ones <= '9'; ones++)
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);

				if (hunderds =! '9' || tens != '9' || ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
