#include "main.h"
/**
 * _strcpy - Copy a string from src to dest.
 * @dest: Pointer to the destination array.
 * @src: Pointer to the source array (string to be copied).
 *
 * Return: Pointer to the start of dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
