#include "main.h"
#include <stdio.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads the contents of a file and prints
 * to POSIX standard output
 * @letters: number of letters to read and print
 * @filename: The file to be read
 *
 * Return: 0 if the file can not be opened or read, if filename
 * if NULL and if write fails otherwise the number of charecters printed
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_read, f_write;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	f_read = read(fd, buf, letters);
	if (f_read == -1)
	{
		free(buf);
		return (0);
	}
	f_write = write(STDOUT_FILENO, buf, f_read);
	if (f_write == -1 || f_read != f_write)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (f_write);
}
