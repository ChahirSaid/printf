#include "main.h"
/**
* _putstr - Prints a string to the standard output
* @s: The string to be printed.
*/
void _putstr(const char *s)
{
int len = _strlen(s);
write(1, s, len);
}
