#include "main.h"
/**
 * _strlen - Computes the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s++)
	len++;
	return (len);
}


/**
 * _printf_c - Prints a single character to the standard output.
 * @c: The character to be printed.
 */

void _printf_c(char c)
{
	_putchar(c);
}

/**
 * _printf_s - Prints a string to the standard output.
 * @s: The string to be printed.
 */

void _printf_s(const char *s)
{
	_putstr(s);
}

/**
 * _printf - Prints a formatted string to the standard output.
 * @format: The format string.
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;
	char c;
	const char *str;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				{
					c = va_arg(args, int);
					_printf_c(c);
					break;
				}
				case 's':
				{
					str = va_arg(args, const char *);
					_printf_s(str);
					break;
				}
				case '%':
				{
					_printf_c('%');
					break;
				}
				default:
					break;
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(args);
	return (count);
}
