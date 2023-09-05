#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name of file to be created
 * @text_content: a NULL terminated string to write to file
 * Return: Success 1 or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x, rdwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (x = 0; text_content[x]; x++)
		;

	rdwr = read(fd, text_content, x);

	if (rdwr == -1)
		return (-1);
	close(fd);
	return (1);
}
