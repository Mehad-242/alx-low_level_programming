#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers of base 16'
 * Return: Always 0
 */
int main(void)
{
	int n = 0;
	int l = 97;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (l = 97; l <= 102; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
