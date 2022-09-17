#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: 0 Always
 *
 * print_fizz_buzz - prints "fizz" for multiples of 3
 * "buzz" for multiples of 5
 * and "fizz_buzz" for multiples of both 3 and 5
 *
 *
 */
int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if ((num % 3) == 0)
			printf("fizz");

		else if ((num % 5) == 0)
			printf("buzz");

		else if ((num % 3 && num % 5) == 0)
			printf("fizz_buzz");

		else
			printf("%d\n", num);
	}
	return (0);

}
