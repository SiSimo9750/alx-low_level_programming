#include "main.h"

/**
 * create_file - this function will creat a file.
 * @filename: pointer to filename param
 * @text_content: the file contenent
 *
 * Return: -1 if failed or 1 if succeed
 *
 */
int create_file(const char *filename, char *text_content)
{
	int open_, write_, length_ = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length_ = 0; text_content[length_];)
			length_++;
	}

	open_ = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_ = write(open_, text_content, length_);

	if (open_ == -1 || write_ == -1)
		return (-1);

	close(open_);

	return (1);
}

