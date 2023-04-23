#include "main.h"
#include <unistd.h>
/**
 * _printf - Printf Function
 * @format: const char.
 * Return: num_chars_printed.
 */
int _printf(const char *format, ...)
{
int numb_chars_printed = 0;
va_list args;
va_start(args, format);

while (*format != '\0')
{
	if (*format == '%')
	{
		format++;
		switch (*format)
		{
			case 'c':
			{
				char c = va_arg(args, int);

				numb_chars_printed += write(1, &c, 1);
				break;
			}
			case 's':
			{
				char *s = va_arg(args, char *);

				numb_chars_printed += write(1, s, strlen(s));
				break;
			}
			default:{
				break;
			}
		}
	}
	else
	{
	numb_chars_printed += write(1, format, 1);
	}
	format++;
}
va_end(args);
return (numb_chars_printed);
}
