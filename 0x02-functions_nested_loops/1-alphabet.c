#include "main.h"
/**
 * print_alphabet - function that prints alphabet in lowercase
 *
 * Return: always 0;
 */



void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
