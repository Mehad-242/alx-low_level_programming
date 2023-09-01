#include "main.h"

/**
 * _islower - checks for lowercase characase character
 * @c: the character to be checked
 * Return: 1 for lowercase character or 0 for any thing clse
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
