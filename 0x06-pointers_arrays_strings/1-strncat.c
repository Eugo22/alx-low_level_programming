#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: destination string pointer.
 * @src: source string pointer.
 * @n: number of bytes to be concatenated.
 *
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_of_dest;
	int z;

	length_of_dest = 0;
	while (dest[length_of_dest] != '\0')
	{
		length_of_dest++;
	}
	for (z = 0; z <= n && src[z] != '\0'; z++, length_of_dest++)
	{
		dest[length_of_dest] = src[z];
	}
	dest[length_of_dest] = '\0';
	return (dest);
}
