/**
 * _putstr - prints the string str to stdout
 * @str: the string to print
 *
 * Return: number of characters printed.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putstr(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		write(1, &s[i], 1);
	return (i);
}

