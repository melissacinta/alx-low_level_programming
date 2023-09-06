#include "main.h"

/**
 * create_file- function that appends text at the end of a file.
 * @filename: file to be read
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file, writef;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		writef = write(file, text_content, strlen(text_content));
		if (writef == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
