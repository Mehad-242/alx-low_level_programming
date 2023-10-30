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
	bit = read(fd, &buf[0], letters);
	bit = write(STDOUT_FILENO, &buf[0], bit);
	close(fd);
	return (bit);
}
