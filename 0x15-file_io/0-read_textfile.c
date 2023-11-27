#include "main.h"

/**
 * read_textfile - function read text file and print it to stdout
 * @filename: name of file
 * @letters: content of the file
 * Return: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t count, r;
	char *c;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	c = (char *)malloc(letters);
	if (c == NULL)
		return (0);
	r = read(file, c, letters);

	if (r == -1)
	{
		free(c);
		return (0);
	}

	count = write(STDOUT_FILENO, c, r);
	free(c);
	close(file);
	return (count);
}
