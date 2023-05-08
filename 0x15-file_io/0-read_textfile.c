#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints to POSIX stdout
 * @filename: name of the file that's read
 * @letters: the number of letters read and printed
 *
 * Return: the actual  number of letters read and printed, 0 if file cannot be
 * opened or read, 0 if @filename is NULL, 0 if write fails or doesn't write
 * the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
