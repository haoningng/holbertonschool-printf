#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_char - writes the argument i.e. char to stdout
 * @args: argument to be printed i.e. char
 *
 * Return: the number of char i.e. 1
 */
int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}

/**
 * print_str - print the argument i.e. str by one char at a time
 * @args: argument to be printed i.e. string
 *
 * Return: the number of char
 */
int print_string(va_list arg)
{
	int i, len;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		len++;
	}
	return (len);
}

/**
 * print_int - prints an integer by one digit at a time
 * @args: argument to be printed i.e. integer
 *
 * Return: Number of characters printed
 */
int print_int(va_list arg)
{
	long i, j, minus, len, strlength;
	char *str;

	i = va_arg(arg, int);
	j = 0;
	str = malloc(10);
	len = 0;
	minus = 0;
	/* check if integer is negative */
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
	/* reverses the integer into a string*/
	while (i > 0)
	{
		str[j] = ((i % 10) + '0');
		i = i / 10;
		j++;
	}
	strlength = strlen(str);
	str[strlength] = '\0';
	/* print the reversed integer backwards starting from last character*/
	while (strlength >= 0)
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
	return (len - 1);
}

/**
 * print_percent - prints a percentage sign
 * @args: arguments
 *
 * Return: 1 i.e. one character
 */
int print_percent(va_list arg)
{
	(void) arg;
	_putchar('%');
	return (1);
}
