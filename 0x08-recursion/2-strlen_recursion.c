#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}

	return (len);
}
