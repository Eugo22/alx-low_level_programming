#include "main.h"
/**
 * _strstr - Finds the first occurrence of a substring (needle)
 * in a string (haystack).
 * @haystack: The string to search in.
 * @needle: The substring to search for
 *
 *
 * Return: A pointer to the first occurrence of the substring in the string,
 * or NULL if the substring is not found.
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;

	char *n = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
