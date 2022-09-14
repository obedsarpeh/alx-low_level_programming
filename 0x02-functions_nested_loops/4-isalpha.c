#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _isalpha - prints all alphabets
 * @c: letters of the alphabet
 * Return: 1 when _isalpha is successful otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
