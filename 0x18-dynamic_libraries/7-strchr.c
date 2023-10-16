#include "main.h"
/**
 * _strchr - Find the first occurrence of a character in a string.
 * @s: The input string to search.
 * @c: The character to find.
 *
 * Return: Pointer to the first occurrence
 * of 'c' in 's', or NULL if not found.
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
