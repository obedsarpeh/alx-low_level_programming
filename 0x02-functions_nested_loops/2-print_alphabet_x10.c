#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times.
 * @n - counts number of lines
 * 'ch' - prints the letters to standard output.
 */



void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		_putchar('\n');
	}
}
