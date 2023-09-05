#include "main.h"

/**
 * append_text_to_file - appends text
 * at the end of a file
 * @filename: is the name of file
 * @text_content:  the NULL terminated string to add
 * at the end of the file
 * Return: if file exist 1
 * if file does not exist -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, apd, x;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (x = 0; text_content[x]; x++)
			;
		apd = write(fd, text_content, x);

		if (apd == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
