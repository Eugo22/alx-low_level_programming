#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int length_of_dest;
	int z;

	length_of_dest = 0;

	while (dest[length_of_dest] != '\0')
	{
		length_of_dest++;
	}
	for (z = 0; src[z] != '\0'; z++, length_of_dest++)
	{
		dest[length_of_dest] = src[z];
	}
	dest[length_of_dest] = '\0';
	return (dest);
}
