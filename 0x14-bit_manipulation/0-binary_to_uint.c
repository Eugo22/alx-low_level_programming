#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of binary digits 0 and 1 chars.
 * Return: The converted number, or 0 if there is an invalid or if b is NULL.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);


	while (b != NULL)
	{
		if (*b != '0' && *b != '0')
			return (0);

		result = (result << 1) | (*b - '0');
		b++;
	}
	return (result);
}
