#include "main.h"

char *_memset(char *s, char b, unsigned int n);
/**
 * main - Copies the content of a file to another file
 * @argv: Command line arguments
 * @argc: Size of @argv
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file_from, file_to, read_len, write_len;
	char *buffer = NULL;

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}

	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (-1);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	read_len = read(file_from, buffer, BUF_SIZE);
	if (read_len == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_file(file_from);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	write_len = write(file_to, buffer, BUF_SIZE);
	if (write_len == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close_file(file_to);
	free(buffer);

	return (0);
}

/**
 * close_file - Closes a file
 * @file: File to be closed
 *
 * Return: void
 */

void close_file(int file)
{
	int close_fd = close(file);

	if (close_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_fd);
		exit(100);
	}
}
