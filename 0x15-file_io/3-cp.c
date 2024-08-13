#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argv: Command line arguments
 * @argc: Size of @argv
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file_from, file_to, read_len, close_fd;
	char buffer[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE_ERR), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);

	while ((read_len = read(file_from, buffer, BUF_SIZE)) > 0)
		if (file_to == -1 || write(file_to, buffer, read_len) != read_len)
			dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);

	if (read_len == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

	close_fd = close(file_from);
	if (close_fd == -1)
		dprintf(STDERR_FILENO, CLOSE_ERR, close_fd), exit(100);

	close_fd = close(file_to);
	if (close_fd == -1)
		dprintf(STDERR_FILENO, CLOSE_ERR, close_fd), exit(100);

	return (0);
}
