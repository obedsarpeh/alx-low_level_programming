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
	char digit;

		for (digit = '0'; digit <= '9'; digit++)

		putchar(digit);

		for (digit = 'a'; digit <= 'f'; digit++)

		putchar(digit);

		putchar('\n');

	return (0);
}
