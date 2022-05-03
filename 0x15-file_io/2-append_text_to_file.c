#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - creates a new file or append to it if already exists
 * @filename: name of the file
 * @text_content: content to be added to file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t f_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		f_write = write(fd, text_content, len);
		if (f_write == -1)
		{
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
