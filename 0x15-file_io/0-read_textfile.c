#include "main.h"

/**
 * read_textfile - This will print the letters and read a text file
 * @filename: filename.
 * @letters: The numbers of letters printed.
 *
 * Return: It return numbers of letters printed. will return 0, If fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return (-1);
	int fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			return (-1);
		}

char *buf = malloc(sizeof(char) * letters);
if (!buf)
	{
	close(fd);
	return (-1);
	}

ssize_t nrd = read(fd, buf, letters);
if (nrd == -1)
	{
		close(fd);
		free(buf);
		return (-1);
	}

ssize_t nwr = write(STDOUT_FILENO, buf, nrd);
if (nwr == -1)
	{
		close(fd);
		free(buf);
		return (-1);
	}

close(fd);
free(buf);

return (nwr);
}
