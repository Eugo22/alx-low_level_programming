#include "main.h"
/**
 * read_textfile - Reads and prints the contents of a text file to stdout.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters/bytes to read and print.
 *
 * Return: The number of letters/bytes read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file1; /*File pointer*/
	char buffer[1000];
	size_t bytes;

	file1 = fopen(filename, "r"); /*Attempt to open the file in read mode ("r")*/

	if (file1 == NULL)
	{
		/*if file couldn't be opened, return 0 (fail)*/
		return (0);
	}

	bytes = fread(buffer, 1, letters, file1);
	fwrite(buffer, 1, letters, stdout);

	fclose(file1);/*Close the file when done reading*/

	/* return the number of bytes read and printed */
	return (bytes);
}
