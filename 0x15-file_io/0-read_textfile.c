#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - func
 *
 * @filename: char
 * @letters: size_t
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];
	ssize_t count;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd < 0)
		return (0);

	count = read(fd, buf, letters);
	buf[count] = '\0';

	write(STDOUT_FILENO, buf, count + 1);
	return (count);
}
