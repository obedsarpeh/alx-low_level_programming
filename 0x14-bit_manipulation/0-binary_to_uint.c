#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts unsigned binary digits to unsigned int.
 *
 * @b: a pointer to a string of 0's and 1's.
 *
 * Return: returns 0 if b is NULL or if b is not equal to '0' or '1'.
 */



unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		val <<= 1;
		val = val | b[i] - '0';
		i++;
	}
	return (val);
}
