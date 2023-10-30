#include "main.h"

/**
 * _strlen - return the length of string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byt = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | 0_TRUNC, S_IRUSR | S_IWUSR)
		if (fd == -1)
			return (-1);
	if (len)
		byt = write(fd, text_content, len);
	close(fd);
	return (byt == len ? 1 : -1);
}
