#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_binary - converts unsigned long int into binary digits.
 *
 * @n: the number to be converted.
 *
 * Return: returns 0 if b is NULL or if b is not equal to '0' or '1'.
 */

void print_binary(unsigned long int n)
{
	unsigned long int conv_num;
	int remainder;

	if (n == 0)
		putchar (0);
	while (n > 0)
	{
		remainder = n % 2;
		conv_num += str(remainder);
		n >>= 1;
		putchar (conv_num);
	}

}
