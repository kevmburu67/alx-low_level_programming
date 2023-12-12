#include "main.h"

/**
 * crate_file - prog creates a file
 * @filename: filename.
 * @text_content: content wrote in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content);
{
	int file_d;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	file_d = open(filename, 0_CREAT | 0_WRONLY | 0_TRUNC, 0600);
	if (file_d == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++);
	rwr = write(file_d, text_content, nletters);

	if (rwr == -1)
		return (-1);
	close(file_d);
	return (1);
}
