#include "main.h"

/**
 * read_textfile - This reads a text file and prints the letters
 * @filename: The filename.
 * @letters: These are numbers of letters printed.
 *
 * Return: It returns numbers of letters printed. If fails, returns 0.
 */

ssize_t read_textfile(const char*filename, size_t letters)
{
if(!filename)
	{return-1;}
int fd=open
	(filename,O_RDONLY);
if(fd==-1)
	{return-1;}
char*buf=malloc(letters);
if(!buf){close(fd);
	return-1;}
ssize_t nrd=read
	(fd,buf,letters);
if(nrd==-1)
	{free(buf);close(fd);
	return-1;}
ssize_t nwr=write(STDOUT_FILENO,buf,nrd);
if(nwr==-1||nwr!=nrd){free(buf);close(fd);
	return-1;}
free(buf);
close(fd);
return (nwr);
}
