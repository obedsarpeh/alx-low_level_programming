#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: is an integer value
 * Return: 1 for postive, '-1' for negative otherwise 0 for print_sign.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}

	else
	{
		_putchar ('0');
		return (0);
	}
}
