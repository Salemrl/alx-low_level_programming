#include "main.h"

/**
 * Reverse_array - reverse array elemts
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

	int tmp, beh = 0;
	int end = n - 1;

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a = beg) = *(a + end);
		*(a + end) = tmp;
		beg++, end--;
	}
}
