#include "main.h"
/**
 * _strcpy - copies the string pointed
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (*(src + n) != '\0')
	{
		n++;
	}
	for (;i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[n] = '\0';
	return (dest);
	
}
