#include "main.h"
/**
 * _memset - Fills a block of memory with a specified value.
 *
 * @s: Pointer to the memory block.
 * @b: Value to be set.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the original memory block
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}

	return (s);
}
