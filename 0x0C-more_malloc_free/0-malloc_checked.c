#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 * Return: pointer to the array initialized
 */

void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b);
	if (n == 0)
		exit(98);

	return (n);
}
