#include "main.h"

/**
 * handle_format_specifier - handles the format specifier
 * @args: va_list
 * @format: char
 * Return: length
 */
int handle_format_specifier(va_list args, const char *format)
{
	convert_t list[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_numbers},
		{'i', print_numbers},
		{(char)0, (int(*)(va_list))0}
	};
	int i, length = 0;
	int flag = 1;

	if (*format == ' ' || *format == '\0')
		return (-1);

	for (i = 0; list[i].specifier != '\0'; i++)
	{
		if (*format == list[i].specifier)
		{
			flag = 0;
			length = list[i].f(args);
		}
	}
	if (flag == 1)
	{
		_putchar('%');
		_putchar(*format);
		length = 2;
	}
	return (length);
}

/**
 * _printf - function that produces output according to a format.
 * @format: string
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	int i, output, length = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			output = handle_format_specifier(args, (char *)&format[++i]);
			if (output == -1)
			return (-1);
		length += output;
	}
		else
		{
			length++;
			_putchar(format[i]);
		}
	}
	va_end(args);
	return (length);
}

