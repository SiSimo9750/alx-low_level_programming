#include "main.h"

/**
 * append_text_to_file - this fnction will add text to a file.
 * @filename: filename parametr pointer.
 * @text_content: text contenent to append.
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_, write_, length_ = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length_ = 0; text_content[length_];)
			length_++;
	}

	open_ = open(filename, O_WRONLY | O_APPEND);
	write_ = write(open_, text_content, length_);

	if (open_ == -1 || write_ == -1)
		return (-1);

	close(open_);

	return (1);
}

