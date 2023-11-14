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

ssize_t read_textfile(const char *filename, size_t letters)
{
        FILE *file;
        char ch;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

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
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytes_read = fread(buffer, 1, letters, file);
	if (bytes_read < 0)
	{
		free(buffer);
		fclose(file);
		return 0;
	}
	buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < 0 || bytes_written != bytes_read)
	{
		free(buffer);
		fclose(file);
		return 0;
       	}
	free(buffer);
	fclose(file);
	return (bytes_read);
}
