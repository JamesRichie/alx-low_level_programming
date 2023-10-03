#include "main.h"

/**
 * read_textfile - function that reads a
 * text file and prints it to the POSIX standard output.
 * @filename: filename
 * @letters: number of letters to print
 * Return: Number of letters || 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;

	ssize_t _read, _write;

	char *buff;

	if (!filename)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	_read = read(f, buff, letters);
	if (_read == -1)
	{
		free(buff);
		close(f);
		return (0);
	}

	_write = write(STDOUT_FILENO, buff, _read);
	if (_write == -1)
	{
		free(buff);
		close(f);
		return (0);
	}
	close(f);
	return (_read);
}
