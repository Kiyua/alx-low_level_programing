#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - func
 *
 * @argc: int
 * @argv: char**
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int fdFrom, fdTo, res;
	char buf[1024];
	ssize_t count;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	fdFrom = open(argv[1], O_RDONLY);
	if (fdFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);		exit(98);
	}

	fdTo = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fdTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}

	count = read(fdFrom, buf, 1024);
	buf[count] = '\0';

	res = close(fdFrom);
	if (res == - 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdFrom);
		exit(100);
	}

	res = write(fdTo, buf, count + 1);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}

	res = close(fdTo);
	if (res == - 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdTo);
		exit(100);
	}
	return (count);
}
