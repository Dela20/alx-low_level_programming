#include "main.h"

/**
 * append_text_to_file - It appends text at the end of a file.
 * @filename: a pointer to the name of the file.
 * @text_content: string added to the end of the file.
 *
 * Return: Function fails or filename is NULL - -1.
 *         file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int q, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
	j = write(q, text_content, len);

	if (q == -1 || j == -1)
		return (-1);

	close(q);

	return (1);
}
