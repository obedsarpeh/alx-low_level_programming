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
	int nums;

	for (nums = 0; nums <= 9; nums++)
	{
		putchar((nums % 10) + '0');
		if (nums == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
