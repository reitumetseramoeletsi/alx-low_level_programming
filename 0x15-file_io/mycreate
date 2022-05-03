#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a new file or append to it if already exists
 * @filename: name of the file
 * @text_content: content to be added to file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t f_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		f_write = write(fd, text_content, len - 1);
		if (f_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
