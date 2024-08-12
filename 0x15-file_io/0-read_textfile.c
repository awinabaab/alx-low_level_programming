#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: File to be read and printed
 * @letters: Number of leters to be printed
 *
 * Return: Number of letters read and printed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t write_len, read_len;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	read_len = read(file, buffer, letters);
	close(file);
	if (read_len == -1)
	{
		free(buffer);
		return (0);
	}

	write_len = write(STDOUT_FILENO, buffer, read_len);
	free(buffer);

	if (read_len != write_len)
		return (0);

	return (read_len);
}
