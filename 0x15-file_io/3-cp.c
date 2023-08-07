#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUF_SIZE 1024

/**
 * exit_with_error - Error message printed to stderr & exits with given code
 * @code: The exit code
 * @message: The error message
 */
void exit_with_error(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}

/**
 * cp - Copies the content of one file to another file.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 */
void cp(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUF_SIZE];
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
exit_with_error(98, "Error: Can't read from file");
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd_to == -1)
exit_with_error(99, "Error: Can't write to file");
while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
exit_with_error(99, "Error: Can't write to file");
}
if (bytes_read == -1)
exit_with_error(98, "Error: Can't read from file");
if (close(fd_from) == -1)
exit_with_error(100, "Error: Can't close fd");
if (close(fd_to) == -1)
exit_with_error(100, "Error: Can't close fd");
}

/**
 * main - Entry point for the cp program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
cp(argv[1], argv[2]);
return (0);
}
