#include "main.h"
/**
 * _strpbrk - _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 *
 *  Return: A pointer to the first occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
