#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: Always (0) (success)
 */
int main(void)
{
	int ones = '0';

	for (ones = '0'; ones <= '9'; ones++)
	{
		int tens = '0';

		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = tens + 1; ones <= '9'; ones++)
			{
				if (!((ones == tens) ||  tens > ones))
				{
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && tens == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
