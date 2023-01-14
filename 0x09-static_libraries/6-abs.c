#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - prints an absolute value
 * @c: absolute form of any value
 * Return: 'c' && '-c' as _abs of c
 */


int _abs(int c)
{

	if (c > 0)
		return (c);

	else
		return (-c);
}
