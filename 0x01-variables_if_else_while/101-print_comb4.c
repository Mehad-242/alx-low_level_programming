#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print combinations of three digits'
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (l = 2; l < 10; l++)
			{
				if (i < j && j < l)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
		return (0);
}
