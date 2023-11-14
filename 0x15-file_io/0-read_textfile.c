#include <stdio.h>
#include "main.h"
#include <string.h>
#include <unistd.h>
/**
* read_textfile- reads a text file and prints it to standard output.
* @filename: Name of the file to be read.
* @letters: number of letters to be read
* Return: Always return 0.
*
*
*
*/

ssize_t read_textfile(const char *filename, __attribute__((unused)) size_t letters)
{
        FILE *file;
        char ch;


        if (filename == NULL)
        {
                return (0);
        }
        file = fopen("filename", "r");
        if (file == NULL)
        {
                return (0);
        }
        else
        {
                ch = fgetc(file);
		printf("%c", ch);
	}
/*	size_t letters = strlen(ch);
	printf("printed chars:%c ", ch);
	return (0);
*/
	fclose(file);
	return (0);
}
