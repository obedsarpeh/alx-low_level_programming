#include "main.h"
#include <stdio.h>

/**
 *_strcat - prints string
 *
 *@dest: first string
 *@src: second string
 *
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;


	i = 0;
	j = 0;
	
	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j] = src[i];
	return (dest);

}

