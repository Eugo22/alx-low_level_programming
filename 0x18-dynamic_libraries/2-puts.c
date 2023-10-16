#include "main.h"
/**
 * _puts - Prints a string to the standard output
 * @s: The string to be printed
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
