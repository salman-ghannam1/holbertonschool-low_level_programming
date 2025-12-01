#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>

/**
 * read_textfile - reads a text file and prints it to STDOUT
 * @filename: file name
 * @letters: number of letters to read
 *
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to append
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
