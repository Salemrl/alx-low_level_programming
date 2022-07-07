#include <stdio.h>

/**
 * main - print numbers from 1 to 100
 * multiples of 3 replace with fizz
 * multiples of 5 replace wiht buzz
 * mulitples of both replace fizzbuzz
 * Return: 0 if successfull
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
