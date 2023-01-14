#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_isdigit - Checks for integer digits
 *
 *@c: Integer to be checked
 *
 *Return: 1 on success otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
