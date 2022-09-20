#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps two integers
 *
 *@a: integer one
 *
 *@b: integer two
 *
 *
 */
void swap_int(int *a, int *b)
{
	int rac = *a;
	*a = *b;
	*b = rac;
}
