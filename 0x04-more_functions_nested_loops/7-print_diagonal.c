#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - draws a diagonal line in terminal
 *
 *@n: counter
 *
 */
void print_diagonal(int n)
{
	int c, spc;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (spc = 0; spc < c; spc++)
				_putchar(' ');
			_putchar('\\');

			if (c == n - 1)
				continue;

			_putchar('\n');
		}

	}
	_putchar('\n');
}
