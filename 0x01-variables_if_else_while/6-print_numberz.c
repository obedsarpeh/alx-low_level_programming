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
	int digit;

	for (digit = 0; digit < 10; digit++)

	putchar((digit % 10) + '0');

	putchar('\n');

	return (0);
}
