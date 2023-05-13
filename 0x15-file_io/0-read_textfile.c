#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- The read text file is printed to STDOUT.
 * @filename: A text file being read
 * @letters: Number of letters to be read
 * Return: w- Actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufs;
	ssize_t fd;
	ssize_t j;
	ssize_t p;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bufs = malloc(sizeof(char) * letters);
	p = read(fd, bufs, letters);
	j = write(STDOUT_FILENO, bufs, p);

	free(bufs);
	close(fd);
	return (j);
}
