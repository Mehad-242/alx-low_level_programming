#include "main.h"
/**
 * _atoi - convert a string into an integer
 * @s: the string to use
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int res = 0;
	int i = 0, sign = 1;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
