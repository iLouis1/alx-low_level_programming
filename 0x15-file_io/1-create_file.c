#include "main.h"

/**
 * create_file - Will create a file
 * @filename: This is the filename.
 * @text_content: The file in which content is written.
 *
 * Return: -1 if it fails, 1 if it succeeds.
 */

int create_file(const char *filename, char *text_content)
{
	if (!filename)
	return (-1);

	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	int nletters = 0;

	while
		(text_content[nletters])

	nletters++;

		int rwr = write(fd, text_content, nletters);

		if (rwr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
