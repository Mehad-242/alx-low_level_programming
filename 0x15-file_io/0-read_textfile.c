#include "main.h"

/**
 * read_textfile - reads text from a file and print it
 * @filename: name of file to read
 * @letters: number of bytesto read
 *
 * Return: number bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byt;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	byt = read(fd, &buf[0], letters);
	byt = write(STDOUT_FILENO, &buf[0], byt);
	close(fd);
	return (byt);
}
