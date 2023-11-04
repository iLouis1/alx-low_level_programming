#include "main.h"

/**
 * append_text_to_file - Will append text at the end of file
 * @filename: The filename.
 *  @text_content: Will add content.
 *
 *  Return: 1 if the file exists. -1 if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = NULL; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

