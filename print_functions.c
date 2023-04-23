#include "main.h"

/**
 * print_char - print a single character
 * @args: va_list
 * Return: 1
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - print a string of characters
 * @args: va_list
 * Return: length of string
 */
int print_string(va_list args)
{
	int i;
	char *s = va_arg(args, char*);

	if (s == NULL)
	s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * print_percent - print a percent sign
 * @args: va_list
 * Return: 1
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * print_numbers - print signed integers
 * @args: va_list
 * Return: length of integer
 */
int print_numbers(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	unsigned int n;

	if (num < 0)
	{
		n = -num;
		_putchar('-');
		count++;
	}
	else
	{
		n = num;
	}

	if (n / 10)
	{
		count += print_numbers_helper(n / 10);
	}

	_putchar(n % 10 + '0');
	count++;

	return (count);
}

/**
 * print_numbers_helper - helper function to recursively print numbers
 * @n: unsigned integer
 * Return: length of integer
 */
int print_numbers_helper(unsigned int n)
{
	int count = 0;

	if (n / 10)
	{
		count += print_numbers_helper(n / 10);
	}

	_putchar(n % 10 + '0');
	count++;

	return (count);
}

