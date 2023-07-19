#include "main.h"
/**
 * print_times_table - print the n times table, starting with 0
 * @n: The value of the tomes table to be printed.
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int k = j * i;

			if (j == 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (k < 100)
			{
				_putchar(' ');
			}
			_putchar((k / 100) + '0');
			_putchar(((k / 10) % 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
