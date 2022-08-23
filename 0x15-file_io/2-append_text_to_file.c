#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - func
 *
 * @filename: char
 * @text_content: char
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		count = write(fd, text_content, strlen(text_content));
		if (count == -1)
			return (-1);
	}

	return (1);
}
