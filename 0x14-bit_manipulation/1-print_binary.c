#include "main.h"
/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 *
 * @n: This takes an unsigned long integer as input and prints its binary
 * representation to the standard output.
 *
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar ((n & 1) ? '1' : '0');
}
