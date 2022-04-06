#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int in, aux, txt_len;

	if (filename == NULL)
		return (-1);
	in = open(filename, O_RDWR | O_APPEND);
	if (in == -1 || (text_content == NULL && in == -1))
		return (-1);
	if (text_content)
	{
		for (txt_len = 0; text_content[txt_len]; txt_len++)
			continue;
		aux = write(in, text_content, txt_len);
		if (aux == -1)
			return (-1);
	}
	close(in);
	return (1);
}
