#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints alphabets in lowercase
 * 'ch' range of alphabets.
 */
void print_alphabet(void)
{
	char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
	{
			_putchar(ch);
	}
		_putchar('\n');

}


