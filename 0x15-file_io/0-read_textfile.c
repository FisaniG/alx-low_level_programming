#include "main.h"

/**
 * read_texfile - read a texfile
 * @filename: name of the file
 * @letters: number of characters
 * Return: letters or 0 if it fails
 */
ssize_t read_texfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t rdfile, wrfile;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rdfile = read(fd, buf, letters);
	wrfile = write(STDOUT_FILENO, buf, rdfile);

	close(fd);

	free(buf);

	return (wrfile);
}

