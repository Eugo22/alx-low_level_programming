#include "main.h"
/**
 * _memcpy - Copy a specified number of bytes from source to destination.
 * @dest: Pointer to the destination array.
 * @src: Pointer to the source array.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the modified destination array.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pDest = dest;
	const char *pSrc = src;

	for (unsigned int i = 0; i < n; i++)
	{
		*pDest = *pSrc;
		pDest++;
		pSrc++;
	}

	return (dest);
}
