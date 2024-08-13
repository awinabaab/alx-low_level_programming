#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 1024
#define USAGE_ERR "Usage: cp file_from file_to\n"
#define READ_ERR  "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"
#define CLOSE_ERR "Error: Can't close fd %d\n"

/* Writes a character to stdout */
int _putchar(char c);

/* Reads a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);

/* Creates a file */
int create_file(const char *filename, char *text_content);

/* Appends a text at the end of a file */
int append_text_to_file(const char *filename, char *text_content);

#endif /* ifndef MAIN_H */
