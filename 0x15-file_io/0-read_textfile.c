#include "main.h"

/**
 * read_textfile - function that reads a text file and prints to the stdout
 * @filename: file to be read
 * @letters: number of letters it should write or print
 * Return: the actual num of letters or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, readFile, writef;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	readFile = read(file, buffer, letters);
	writef = write(STDOUT_FILENO, buffer, readFile);

	if (readFile == -1 || writef == -1 || writef != readFile)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file);

	return (writef);
}
