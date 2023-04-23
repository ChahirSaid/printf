#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

/**--Functions--*/
int _strlen(const char *s);
int _printf(const char *format, ...);
void _putchar(char c);
void _putstr(const char *s);

#endif
