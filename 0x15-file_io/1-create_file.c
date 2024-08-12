#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file to be created
 * @text_content: Text content of @filename
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, str_len, write_len;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	for (str_len = 0; text_content[str_len]; str_len++)
		;

	write_len = write(file, text_content, str_len);

	if (write_len == -1)
		return (-1);

	close(file);

	return (1);
}
