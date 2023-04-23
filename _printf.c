#include "main.h"
/**
 * _strlen - Computes the length of a string.
 * @s: The string to be measured.
 *
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
 * _printf - Prints a formatted string to the standard output.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i, count = 0;
    const char *str;

    va_start(args, format);

    for (i = 0; format[i]; i++)
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
		case 'c':{
		char c = va_arg(args, int);
			count += write(1, &c, 1); 
			break;
		}
                case 's':
                    str = va_arg(args, const char *);
                    count += write(1, str, _strlen(str));
                    break;
                case '%':
                    count += write(1, "%", 1);
                    break;
                default:
                    count += write(1, &format[i - 1], 2);
                    break;
            }
        }
        else
        {
            count += write(1, &format[i], 1);
        }
    }

    va_end(args);

    return (count);
}
