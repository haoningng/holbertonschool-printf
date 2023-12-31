#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
 * print_int - prints an integer by one digit at a time
 * @arg: argument to be printed i.e. integer
 *
 * Return: Number of characters printed
 */
int print_int(va_list arg)
{
	long i, j, minus, len, strlength;
	char *str;

	i = va_arg(arg, int);
	str = malloc(6);
	if (str == NULL)
		return (-1);
	j = len = minus = 0;
	if (i < 0)
	{
		minus = 1;
		i = i * -1;
	}
	if (i == 0)
	{
		_putchar('0');
		return (1); /* one character printed */
	}
	while (i > 0)
	{
		str[j] = ((i % 10) + '0');
		i = i / 10;
		j++;
	}
	strlength = strlen(str);
	while (strlength > 0)
	{
		if (minus == 1)
		{
			_putchar('-'); /* print '-' sign if intger is neg */
			len++;
			minus = 0;
		}
		_putchar(str[strlength - 1]);
		strlength--;
		len++;
	}
	free(str);
	return (len);
}
