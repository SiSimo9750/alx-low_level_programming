#include "main.h"

/**
 * create_file - a function to creat a file.
 * @filename: filename pointer.
 * @text_content: file text content.
 *
 * Return: -1 if failed or 1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, length);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
