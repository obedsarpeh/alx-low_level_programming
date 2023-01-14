#include <stdio.h> /* MACRO for standard input and output */



int main(void) /* prototype */
{
	int money[10] = {10, 5, 25, 2, 90, 45, 12, 98, 23, 443}; /* declaring and initializing money */

	int i; /* declaring i & j */

	for (i = 0; i <= 10; ++i) /* setting a condition for loop */
/* setting element location at i to i + 200 */
			printf("The location of %d is %d\n", i, money[i]);
	return (0);
}

