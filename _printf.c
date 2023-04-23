#include "main.h"
/**
 * _printf - Printf Function
 * @format: const char.
 * Return: num_chars_printed.
 */
int _printf(const char *format, ...)
{
int numb_chars_printed;
va_list args;
va_start(args, format);
numb_chars_printed = 0;
while (format != '\0')
{
if (format == '%')
{
switch (++format)
{
case 'c': {
char c = va_arg(args, int);
numb_chars_printed += write(1, &c, 1);
break;
}
case 's': {
char str = va_arg(args, char);
numb_chars_printed += write(1, str, srtlen(str));
break;
}
default:{
break;
}
}
}
else
numb_chars_printed += write(1, format, 1);
format++;
}
va_end(args);
return (numb_chars_printed);
}
