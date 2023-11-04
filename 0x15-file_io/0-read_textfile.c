#include "main.h"

/**
 * read_textfile - it's read the text from a file and print it
 * @filename: file input to read
 * @letters: bytes input to read
 *
 * Return: read-printed bytes number
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &but[0], bytes);
	close(fd);
	return (bytes);
}
