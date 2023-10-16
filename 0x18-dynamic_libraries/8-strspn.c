#include "main.h"
/**
 * _strspn - Calculates the length of the initial segment of `s`
 * consisting only of characters that are part of `accept`.
 *
 * @s: The input string.
 * @accept: The string containing characters to be accepted.
 *
 * Return: The length of the initial segment of `s`.
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_accepted = 1;

	while (*s != '\0')
	{
		is_accepted = 0;

		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				is_accepted = 1;
				break;
			}
		}

		if (is_accepted == 0)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
