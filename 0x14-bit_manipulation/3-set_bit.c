#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to index
 * @index: the bit to set
 *
 * Return: 1 if successful, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
