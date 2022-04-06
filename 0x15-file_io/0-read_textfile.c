#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: Name of the file with extension
 * @letters: Number of letters to read
 * Return: Actual number of letters read, 0 if something fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, in, aux;
	char *buff;

	if (filename  == NULL)
		return (0);
	buff = (char *)malloc(((sizeof(char)) * letters) + 1);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (i == -1)
	{
		free(buff);
		return (0);
	}
	ret = read(i, buff, letters);
	if (in == -1)
	{
		free(buff);
		close(i);
		return (0);
	}
	buff[ret] = '\0';
	aux = write(STDOUT_FILENO, buff, in);
	if (aux < 0 || aux != in)
	{
		free(buff);
		close(i);
		return (0);
	}
	close(i);
	free(buff);
	return (in);
}
