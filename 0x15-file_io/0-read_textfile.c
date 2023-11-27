#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - a function to read the text from the fil3
 * @filename: the fille name
 * @letters: 3dd al7roof
 * Return: valu3
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024 * 8];
	int x;
	ssize_t count;

	if (!filename || !letters)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	count = read(x, &buffer[0], letters);
	count = write(STDOUT_FILENO, &buffer[0], count);

	close(x);
	return (count);
}
