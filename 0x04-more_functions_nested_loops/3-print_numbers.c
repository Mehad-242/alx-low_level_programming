#include "main.h"

/**
 * print_number - print the numbers since 0 up to 9
 * Return: the numbers since 0 up to 9
 */

int print_numbers(void)

{
	int x;

	for (x = 0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	return ('\n')
}
