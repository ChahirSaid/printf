#include "main.h"

/**
* _putchar - Prints a single character to the standard output.
* @c: The character to be printed.
* Return: char
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
