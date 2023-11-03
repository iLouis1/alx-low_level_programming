#include "main.h"

/**
 * read_textfile - This will read a text file and print the letters
 * @filename: Tis is the filename.
 * @letters: The numbers of letters printed.
 *
 * Return: Will return numbers of letters printed. Returns 0, If fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	nrd = read(fd, buf, letters);
	if (nrd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	nwr = write(STDOUT_FILENO, buf, nrd);
	if (nwr == -1)
	{
	free(buf);
	close(fd);
	return (0);
	}

	close(fd);
	free(buf);

	return (nwr);
}
