#include "main.h"

/**
 * move_past_star - past
 * @s2: string
 * Return: string
 */

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - compares two strings and returns n
 * @s1: string
 * @s2: second string
 * Return: n
 */

int inception(char *s1, char *s2)
{
	int n = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		n += wildcmp(s1 + 1, s2 + 1);
	n += inception(s1 + 1, s2);
	return (n);
}

/**
 * wildcmp - compares two strings and returns 1 or 0
 * @s1: first string
 * @s2: the second string
 *
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	int n = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			n += wildcmp(s1 + 1, s2 + 1);
		n += inception(s1, s2);
		return (!!n);
	}
	return (0);
}
