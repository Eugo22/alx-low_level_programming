#include "main.h"
/**
 * _strncat - Concatenate up to 'n' characters from
 * src to the end of dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to append from src.
 *
 * Return: Pointer to the concatenated string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	char *destStart = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (destStart);
}
