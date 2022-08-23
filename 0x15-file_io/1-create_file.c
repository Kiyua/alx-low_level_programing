#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - func
 *
 * @filename: char
 * @content: char
 *
 * Return: int
 */
int create_file(const char *filename, char *content)
{
	int fd, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	count = write(fd, content, strlen(content));
	if (count == -1)
		return (-1);

	return (1);
}
