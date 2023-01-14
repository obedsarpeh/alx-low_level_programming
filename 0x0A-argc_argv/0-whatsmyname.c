#include <stdio.h>
#include <stdlib.h>
/**
 * main -  writes its name
 * @argc: argument count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(__attribute__((unused))int argc, char *argv[])
{
	argc = 0; /*argc = argc */
	printf("%s\n", *argv);
	/* return (0); */
	exit(EXIT_SUCCESS);
}
