#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct convert - structure to handle conversion specifiers
 * @specifier: conversion specifier
 * @f: function pointer to corresponding print function
 */
typedef struct convert
{
	char specifier;
	int (*f)(va_list);
} convert_t;

/**--Functions--*/
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_numbers(va_list args);
int print_numbers_helper(unsigned int n);

#endif
