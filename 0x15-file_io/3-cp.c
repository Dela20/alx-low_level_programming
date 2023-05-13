#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - It allocates 1024 bytes for a buffer.
 * @file: Name of the file buffer is storing chars for.
 *
 * Return: The pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffers;

	buffers = malloc(sizeof(char) * 1024);

	if (buffers == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffers);
}

/**
 * close_file - It closes file descriptors.
 * @fd: A file descriptor to be closed.
 */
void close_file(int fd)
{
	int n;

	n = close(fd);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - It copies the contents of a file to another file.
 * @argc: the number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: argument count is incorrect - exit code 97.
 * if file_from does not exist or cannot be read - exit code 98.
 * if file_to cannot be created or written to - exit code 99.
 * if file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, i, j;
	char *buffers;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffers = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	i = read(from, buffers, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || i == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffers);
			exit(98);
		}

		j = write(to, buffers, i);
		if (to == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffers);
			exit(99);
		}

		i = read(from, buffers, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (i > 0);

	free(buffers);
	close_file(from);
	close_file(to);

	return (0);
}
