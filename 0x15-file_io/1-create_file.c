#include "main.h"

/**
 * create_file - Creates a file with the specified content.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int file, written, len = 0;
if (filename == NULL)
return (-1);
if
(text_content != NULL) {
while (text_content[len] != '\0')
len++;
}
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
return (-1);
if
(len > 0) {
written = write(file, text_content, len);
if (written != len)
{
close(file);
return (-1);
}
}
close(file);
return (1);
}
