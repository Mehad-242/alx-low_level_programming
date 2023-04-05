#include "main.h"

/**
 * _memcpy - Entry point
 * @dset: input
 * @src: input
 * @n: input
 * Return: always 0 (success)
 */

char *_memcpy(char *dset, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dset[i] = src[i];
	return (dset);
}
