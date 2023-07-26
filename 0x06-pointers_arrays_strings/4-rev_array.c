#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer to array.
 * @n: number of elements of an array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, z;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
		z = a[i];
		a[i++] = a[n];
		a[n--] = z;
	}
}
