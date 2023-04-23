#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**--Functions--*/
int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *s);
int _putint (int *num);

#endif
