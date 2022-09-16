#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */
/**
 * positive_or_negative - prints positive or negative
 * numbers
 *@n: prints number positive or negative
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

void positive_or_negative(int n)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);

	else
		printf("%d is positive\n", n);

	return;
}
