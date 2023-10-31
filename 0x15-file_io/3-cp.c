#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function to creat a buffer.
 * @file: filename parametre input
 *
 * Return: newly-allocated pointer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - function to close file.
 * @fd: file descriptor input parametre
 */
void close_file(int fd)
{
	int close_var;

	close_var = close(fd);

	if (close_var == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy file to file.
 * @argc: arguments number counter input.
 * @argv: arguments vector pointers input.
 *
 * Return: on success 0
 *
 */
int main(int argc, char *argv[])
{
	int src_, dest_, read_, write_;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	src_ = open(argv[1], O_RDONLY);
	read_ = read(src_, buffer, 1024);
	dest_ = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src_ == -1 || read_ == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_ = write(dest_, buffer, read_);
		if (dest_ == -1 || write_ == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_ = read(src_, buffer, 1024);
		dest_ = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_ > 0);

	free(buffer);
	close_file(src_);
	close_file(dest_);

	return (0);
}

