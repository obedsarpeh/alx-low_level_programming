#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int digit1, digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = digit1 + 0; digit2 < 10; digit2++)
		{
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');

				if (digit1 == 9 && digit2 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
