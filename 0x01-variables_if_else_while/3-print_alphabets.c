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
	int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
	{
			putchar(ch);
	}
		for (ch = 'A'; ch <= 'Z'; ch++)
	{
			putchar(ch);
	}

		putchar('\n');
	return (0);
}
