#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prent'
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int l;
	int m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (l = 0; l < 10; l++)
			{
				for (m = 1; m < 10; m++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(l + '0');
					putchar(m + '0');
					putchar(',');
					putchar(' ');
					
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


