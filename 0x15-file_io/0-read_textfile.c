#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function to read a file
 * @filename: filename pointer parametr.
 * @letters: number of letters
 *
 * Return: 0 or bytes count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_, read_, write_;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open_ = open(filename, O_RDONLY);
	read_ = read(open_, buffer, letters);
	write_ = write(STDOUT_FILENO, buffer, read_);

	if (open_ == -1 || read_ == -1 || write_ == -1 || write_ != read_)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_);

	return (write_);
}

