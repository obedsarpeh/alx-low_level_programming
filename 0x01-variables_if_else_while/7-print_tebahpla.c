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
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

		putchar(letter);

	putchar('\n');

	return (0);
}
