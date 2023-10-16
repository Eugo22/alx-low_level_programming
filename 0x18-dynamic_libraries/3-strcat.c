#include "main.h"
/**
 * _strcat - Concatenates the source string to the end
 * of the destination string.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the beginning of the combined string.
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}
