#include "main.h"
#include <stdio.h>
/**
 *main - Lists all the natural
 *numbers below 1024 (excluded)
 *that are multiples of 3 or 5.
 *
 *
 *
 *Return: Always 0.
 */
int main(void)
{
	int n;
	int sum_m = 0;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum_m += n;
	}
		printf("%d\n", sum_m);
		return (0);
}
