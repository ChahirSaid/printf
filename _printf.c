#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appriopiately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _printf - Printf Function
 * @format: const char.
 * Return: count.
 */
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int count = 0;
while (*format)
{
if (*format != '%')
{
_putchar(*format);
count++;
}
else
{
format++;
switch (*format)
{
case 'c': {
char c = (char) va_arg(args, int);
_putchar(c);
count++;
break;
}
case 's': {
char *s = va_arg(args, char *);
while (*s)
{
_putchar(*s);
s++;
count++;
}
break;
}
}
}
format++;
}
va_end(args);
return (count);
}
