#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_isupper - Checks for uppercases
 *
 *@c: Character to be checked
 *
 *Return: 1 on success otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
