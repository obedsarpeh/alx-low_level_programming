#include <stdlib.h>
#include <stdio.h>
/**
 * main - checks the code
 * Return: Always 0
 *
 *
 *
 *
 */
int main(void)
{
	int r_ead;
	unsigned long f1, f2, sum;

	sum = 0;
	f1 = 0;
	f2 = 1;
	for (r_ead = 1; r_ead <= 98; r_ead++)
	{
		sum = f1 + f2;
	printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (r_ead == 94)
			printf("\n");

		else
			printf(",");
		printf(" ");
		continue;
	}
	printf("\n");
	return (0);
}
