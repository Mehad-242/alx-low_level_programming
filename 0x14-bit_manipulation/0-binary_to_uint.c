#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the unsigned int from of b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = n * 2 + (*b++ - '0');
	}
	return (n);
}
