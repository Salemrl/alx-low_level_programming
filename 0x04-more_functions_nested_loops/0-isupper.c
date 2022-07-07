#include "main.h"

/**
 * _isupper - will check for upper case characteres
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	
	return (0);
}
