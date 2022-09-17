#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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

	for (num = 1; num < 101; num++)
	{
		if ((num % 15) == 0)
			printf("FizzBuzz\t");

		else if ((num % 3) == 0)
			printf("Fizz\t");

		else if ((num %5) == 0)
			printf("Buzz\t");

		else
			printf("%d\t", num);


		printf(" ");
	}

	return (0);

}
