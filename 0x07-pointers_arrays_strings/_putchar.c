#include <unistd.h>
#include "main.h"
/**
 * _putchar - returns single characters
 *
 * Return: 1, 0, or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
