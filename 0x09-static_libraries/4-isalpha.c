#include "main.h"
/**
 * _isalpha - print alphabetic character
 * @c: the charcter
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
