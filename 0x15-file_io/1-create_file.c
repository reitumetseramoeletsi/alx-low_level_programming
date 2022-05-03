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
	int fd;
	
	if (filename == NULL)

	fd = open(filename, O-CREAT | O_WRONLY | O_APPEND, 0600);
}
