#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads text file and prints its content to standard output
 * @filename: The name of the file that should be read
 * @letters: The number of letters that should be read and printed
 *
 * Return: Total number of characters read and printed on success,0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t file, written, t;
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
buffer = (char *)malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(file);
return (0);
}
t = read(file, buffer, letters);
if (t == -1)
{
free(buffer);
close(file);
return (0);
}
written = write(STDOUT_FILENO, buffer, t);
free(buffer);
close(file);
return (written);
}
