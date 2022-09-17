#include "main.h"
#include <stdio.h>

/**
 *print_line - draws a straight line in terminal
 *
 *@n: counter
 *
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)

			_putchar('_');

	}
	_putchar('\n');
}
