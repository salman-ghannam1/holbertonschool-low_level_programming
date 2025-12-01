#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_read - prints read error and exits
 * @file: file name
 */
void error_read(const char *file)
{
	dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * error_write - prints write error and exits
 * @file: file name
 */
void error_write(const char *file)
{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * error_close - prints close error and exits
 * @fd: file descriptor value
 */
void error_close(int fd)
{
	dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * copy_file - copies content from one fd to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_from: source file name (for error messages)
 * @file_to: destination file name (for error messages)
 */
void copy_file(int fd_from, int fd_to,
	       const char *file_from, const char *file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t r, w;

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
			error_write(file_to);
	}

	if (r == -1)
		error_read(file_from);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_read(argv[1]);

	fd_to = open(argv[2],
		     O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_write(argv[2]);
	}

	copy_file(fd_from, fd_to, argv[1], argv[2]);

	if (close(fd_from) == -1)
		error_close(fd_from);
	if (close(fd_to) == -1)
		error_close(fd_to);

	return (0);
}
