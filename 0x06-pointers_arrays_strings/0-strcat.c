#include "main.h"

/**
 * _strcat - concatenate n bytles to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytles(chars)
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}