#include "main.h"
/**
 * append_text_to_file - Appends text_content to the end of a file.
 *
 * @filename: The name of the file to which text will be appended.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file3;
	int result;

	file3 = fopen(filename, "a");

	if (filename == NULL)
		return (-1);

	result = fprintf(file3, "%s", text_content);

	if (result < 0)
	{
		fclose(file3);
		return (-1);
	}
	fclose(file3);

	return (1);
}
