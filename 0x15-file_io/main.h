#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* Writes a character to stdout */
int _putchar(char c);

/* Reads a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);

/* Creates a file */
int create_file(const char *filename, char *text_content);

#endif /* ifndef MAIN_H */
