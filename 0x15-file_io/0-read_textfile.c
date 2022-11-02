#include "main.h"

/**
 * read_textfile - read a texfile
 * @filename: name of the file
 * @letters: number of characters
 * Return: textfile or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	size_t rdfile;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
	{
		free(buf);
		return (0);
	}

	rdfile = read(fd, buf, letters);

	buf[rdfile] = '\0';

	close(fd);
	write(STDOUT_FILENO, buf, rdfile);
	free(buf);

	return (rdfile);
}

