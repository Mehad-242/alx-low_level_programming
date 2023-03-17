#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(s)", sizeof(int));
	printf("size of long int: %lu byte(s)", sizeof(long int));
	printf("size of long long: %lu byte(s)", sizeof(long long));
	return (0);
}
