#include "main.h"

#define BUFFER_SIZE 1024
/**
 * error_and_exit - function to output error and exit
 * @code: error code
 * @message: error message to be printed
 */

void error_and_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * check_rsource_dest - function to output error and exit
 * @f_source: source
 * @f_dest:destination file
 * @bytes_read: bytes read
 */
void check_rsource_dest(ssize_t f_source, ssize_t f_dest, ssize_t bytes_read)
{
	if (bytes_read == -1)
	{
		close(f_source);
		close(f_dest);
		error_and_exit(98, "Error: Can't read from file %s");
	}
	if (close(f_source) == -1 || close(f_dest) == -1)
	{
		error_and_exit(100, "Error: Can't close file descriptor");
	}
}

/**
 * main - function that copies the content of a file to another file
 * @argc: number of variable;
 * @argv: variables
 *
 * Return: 0 or exit code
 */

int main(int argc, char *argv[])
{
	ssize_t f_source, f_dest, bytes_read;
	char buffer[BUFFER_SIZE];
	char *file_from, *file_to;

	if (argc != 3)
	{
		error_and_exit(97, "Usage: cp file_from file_to");
	}

	file_from = argv[1];
	file_to = argv[2];

	f_source = open(file_from, O_RDONLY);
	if (f_source == -1)
	{
		error_and_exit(98, "Error: Can't read from file %s");
	}

	f_dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (f_dest == -1)
	{
		close(f_source);
		error_and_exit(99, "Error: Can't write to file %s");
	}

	while ((bytes_read = read(f_source, buffer, BUFFER_SIZE)) > 0)
	{
		ssize_t bytes_written = write(f_dest, buffer, bytes_read);

		if (bytes_written == -1)
		{
			close(f_source);
			close(f_dest);
			error_and_exit(99, "Error: Can't write to file %s");
		}
	}

	check_rsource_dest(f_source, f_dest, bytes_read);
	return (0);
}
