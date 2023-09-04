#include "main.h"

/**
 * append_text_to_file - add text to a file.
 * @filename: filename pointer.
 * @text_content: text to add.
 *
 * Return: 1 or -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, length);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
