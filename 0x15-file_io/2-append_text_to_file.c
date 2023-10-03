#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: string
 * Return: 1 for success || -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, _write;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (!text_content)
	{
		close(f);
		return (1);
	}
	_write = write(f, text_content, strlen(text_content));
	if (_write == -1 || _write != (int)strlen(text_content))
	{
		close(f);
		return (-1);
	}
	close(f);
	return (1);
}
