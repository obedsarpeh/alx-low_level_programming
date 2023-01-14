#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if the input character is a lowercase
 * @c: is the character input which prints to
 * standard output.
 * Return: 1 when _islower is true otherwise 0
 */
int _islower(int c)
{

	if (c > 'a' && c < 'z')

		return (1);

	else

	return (0);
}
