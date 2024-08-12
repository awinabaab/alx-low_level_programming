#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: Name to file to be appended
 * @text_content: Text to be appended to @filename
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, str_len, write_len;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	for (str_len = 0; text_content[str_len]; str_len++)
		;

	write_len = write(file, text_content, str_len);

	if (write_len == -1)
		return (-1);

	return (1);
}
