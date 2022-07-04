#include <stdio.h>

/**
 * main - print hexa base
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0';
	int hexa = 'a';

while (num <= '9') /*print 0-9*/

	{
		putchar(num);
		num++;
	}

while (hexa <= 'f'); /*print the rest of the hexabase*/

{
		putchar(hexa);
		hexa++;
}

	putchar('\n');
	return (0);
}
