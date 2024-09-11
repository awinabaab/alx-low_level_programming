# C - File I/O
  - What are file descriptors
  - What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
  - How to use the I/O system calls open, close, read and write
  - What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
  - What are file permissions, and how to set them when creating a file with the open system call
  - What is a system call
  - What is the difference between a function and a system call

## [0-read_textfile.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x15-file_io/0-read_textfile.c)
   A function that reads a text file and prints it to `POSIX` standard output
   - Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
   - Where `letters` is the number of letter it should read and print
   - Returns the actual numbe of letter it could read and print
   - If the file cannot be opened or read, returns `0`
   - If `filename` is `NULL` returns `0`
   - If `write` fails or does not write the expected amount of bytes, return `0`

## [1-create_file.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x15-file_io/1-create_file.c)
   A function that creates a file
   - Prototype: `int create_file(const char *filename, char *text_content);`
   - Where `filename` is the name of the file to create
   - And `text_content is a `NULL` terminated string to write to the file
   - Returns `1` on success, `-1` on failure
   - The created file must have permissions: `-rw-------`.\
    If the file already exists, do not change the permissions
   - If the file already exists, truncate it
   - If `text_content` is `NULL` create an empty file

## [2-append_text_to_file.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x15-file_io/2-append_text_to_file.c)
   A function that appends text at the end of a file
   - Prototype: `int append_text_to_file(const char *filename, char *text_content);`
   - Where `filename` is the name of the file.
   - And `text_content` is the `NULL` terminated string to add to end of the file
   - Returns `1` on success, `-1` on failure
   - Do not create the file if does not exist
   - If `filename` is `NULL` return `-1`
   - If `text_content` is `NULL`, do not add anything to the file.
   - Returns `1` if the file exists and `-1` if the file does not exist or\
    if you do not have the required permissions to write to the file

## [3-cp.c](https://github.com/awinabaab/alx-low_level_programming/blob/master/0x15-file_io/3-cp.c)
   A program that copies the content of a file to another file
   - If the number of argument is not the correct one, exit with code `97` and print\
    `Usage: cp file_from file_to`, followed by a new line, on the `POSIX` standard error
   - If file_to already exists, truncate it
   - If file_from does not exist, or if you can not read it, exit with code `98`\
    and print `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line,\
     on the `POSIX` standard error
   - Where `NAME_OF_THE_FILE` is the first argument passed to your program
   - If you can not create or if write to file_to fails, exit with code `99`\
    and print `Error: Can't write to NAME_OF_THE_FILE`, followed by a new line,\
     on the `POSIX` standard error
   - Where `NAME_OF_THE_FILE` is the second argument passed to your program
   - If you can not close a file descriptor , exit with code `100`\
    and print `Error: Can't close fd FD_VALUE`, followed by a new line,\
     on the POSIX standard error
   - Where `FD_VALUE` is the value of the file descriptor
   - Permissions of the created file: `rw-rw-r--`.\
    If the file already exists, do not change the permissions