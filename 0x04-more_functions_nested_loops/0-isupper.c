#include "main.h"

/**
 * _isupper - will check for upper case characteres return 1 if upper and 0 if lower
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	
	return (0);
}
