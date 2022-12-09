#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int digits1, digits2, digits3;

	for (digits1 = 0; digits1 < 8; digits1++)
	{
		for (digits2 = digits1 + 1; digits2 < 9; digits2++)
		{
			for (digits3 = digits2 + 1; digits3 < 10; digits3++)
			{
				putchar((digits1 % 10) + '0');
				putchar((digits2 % 10) + '0');
				putchar((digits3 % 10) + '0');

				if (digits1 == 7 && digits2 == 8 && digits3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
