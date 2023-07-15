#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: Always (0) (success)
 */
int main(void)
{
	int ones = '0', tens = '0', hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = hundreds + 1; tens <= '9'; tens++)
		{
			for (ones = tens + 1; ones <= '9'; ones++)
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);
					
				if (hundres !=  '7' || tens != '8' ||  ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
