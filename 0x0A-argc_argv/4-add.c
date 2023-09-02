#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all starts here
 * @argc: int
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *n;

	while (--argc)
	{
		for (n = argv[argc]; *n; n++)
			if (*n < '0' || *n > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
