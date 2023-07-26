#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * Return: a value is reater than 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i, z;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	z = s1[i] - s2[i];
	return (z);
}
