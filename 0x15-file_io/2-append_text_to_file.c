#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, written, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[len] != '\0')
len++;
}
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
return (-1);
if (len > 0)
{
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
