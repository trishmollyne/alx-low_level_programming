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
if (filename == NULL)
{
return (0);
}
int file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
char *buffer = (char *)malloc(letters);
if (buffer == NULL)
{
close(file);
return (0);
}
ssize_t bytesRead = read(file, buffer, letters);
if (bytesRead == -1)
{
free(buffer);
close(file);
return (0);
}
ssize_t totalBytesWritten = 0;
ssize_t bytesWritten;
while (totalBytesWritten < bytesRead)
{
bytesWritten = _putchar(buffer[totalBytesWritten]);
if (bytesWritten == -1)
{
free(buffer);
close(file);
return (0);
}
totalBytesWritten += bytesWritten;
}
free(buffer);
close(file);
return (totalBytesWritten);
}
