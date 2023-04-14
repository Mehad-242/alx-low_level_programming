#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: 0n success
 * 0n erroe, -1 is returned, and errno is set approprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
