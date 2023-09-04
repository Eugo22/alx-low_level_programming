#include "main.h"
/**
 * create_file - Create or truncate a file and write text content to it.
 *
 * @filename: The name of the file to create or truncate.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);

	if (!text_content)
		text_content = "";

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0666);

	if (fp == -1)
		return (-1);

	if (write(fp, text_content, strlen(text_content)) == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
