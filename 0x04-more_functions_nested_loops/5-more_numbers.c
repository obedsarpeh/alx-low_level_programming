#include "main.h"
#include <stdio.h>

/**
 *more_numbers - Print 0-14 times 10
 *
 *
 *
 */
void more_numbers(void)
{
	int con, a;

	for (con = 0; con <= 10; con++)

	{
	for (a = 0; a <= 14; a++)
	{
		if (a > 9)
		
			_putchar((a / 10) + '0');

		_putchar((a % 10) + '0');
	}

	_putchar('\n');
	}
}
