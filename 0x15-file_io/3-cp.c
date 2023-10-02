#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
/**
 * main - Entry point of the program.
 * @argc: Argument count (number of command-line arguments).
 * @argv: Argument vector (array of strings containing command-line arguments)
 * Return: 0 on success, a non-zero value on failure.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
return (97);
}
const char *file_from = argv[1];
const char *file_to = argv[2];
int fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
return (98);
}
int fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
return (99);
}
char buffer[BUFFER_SIZE];
ssize_t bytes_read;
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
ssize_t bytes_written = write(fd_to, buffer, bytes_read);
if(bytes_written == -1) 
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
return (99);
}
}
if(bytes_read == -1) 
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
return (98);
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
return (100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
return (100);
}
return (0);
}
