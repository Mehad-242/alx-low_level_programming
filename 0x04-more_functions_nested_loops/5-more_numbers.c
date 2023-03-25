#include "main.h"

/**
 * moer_numbers - print 10 times the  numbers since 0 up to 14
 * Return: 10 times of the number since 0 up to 14
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 10)
	{
	_putchar((j / 10) + '0');
	}
	_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}
