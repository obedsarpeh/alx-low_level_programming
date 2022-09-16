#include "main.h"
#include <stdio.h>

/**
 *print_numbers - Print 0-9
 *
 *
 */
void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
