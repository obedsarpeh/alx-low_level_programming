#include "main.h"
#include <stdio.h>

/**
 *_strlen - prints length of string
 *
 *@s: pointer to character
 *
 *
 *Return: length of @*s
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

