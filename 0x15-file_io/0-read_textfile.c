#include "main.h"

/**
 * read_textfile - Reads a textfile and prints it to the
 * POSTX standard output
 * @letters: The number of letters to be read and printed
 * @filename: Pointer to the file name
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t1, t2;
	int fd;
	char *chrs;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	chrs = malloc(sizeof(filename) * letters);
	if (chrs == NULL)
		return (0);

	t1 = read(fd, chrs, letters);
	if (t1 < 0)
		return (0);

	t2 = write(STDOUT_FILENO, chrs, t1);
	if (t2 < 0)
		return (0);

	free(chrs);
	close(fd);
	return (t2);
}
