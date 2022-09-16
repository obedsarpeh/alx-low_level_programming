#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - Print 0-9 not 2, 4
 *
 *
 */
void print_most_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
		_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
