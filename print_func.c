#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
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
 * Return: Nothing.
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
}

/**
 * print_str - print the argument i.e. str by one char at a time
 * @args: argument to be printed i.e. string
 *
 * Return: Nothing.
 */
void print_string(va_list arg)
{
	int i;
	char *str;

	str = va_arg(arg, char *);
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * print_int - prints an integer by one digit at a time
 * @args: argument to be printed i.e. integer
 *
 * Return: Nothing
 */
void print_int(va_list arg)
{
	int i, rev_i, minus;

	i = va_arg(arg, int);
	rev_i = 0;
	minus = 0;
	/* check if integer is negative */
	if (i < 0)
	{
		minus = 1;
		i = i * -1;
	}
	/* reverses the integer */
	while (i > 0)
	{
		rev_i = (rev_i * 10) + i % 10;
		i = i / 10;
	}
	/* print the reversed integer backwards starting from last digit*/
	while (rev_i > 0)
	{
		if (minus == 1)
		{
			_putchar('-'); /* print '-' sign if intger is neg */
			minus = 0;
		}
		_putchar(rev_i % 10 + '0');
		rev_i = rev_i / 10;
	}
}

/**
 * print_decimal - prints a decimal
 * @args: argument to be printed i.e. decimal
 *
 * Return: Nothing
 */
void print_decimal(va_list arg)
{
	int i, rev_i, minus;

	i = va_arg(arg, int);
	rev_i = 0;
	minus = 0;
	/* check if integer is negative */
	if (i < 0)
	{
		minus = 1;
		i = i * -1;
	}
	/* reverses the integer */
	while (i > 0)
	{
		rev_i = (rev_i * 10) + i % 10;
		i = i / 10;
	}
	/* print the reversed integer backwards starting from last digit*/
	while (rev_i > 0)
	{
		if (minus == 1)
		{
			_putchar('-'); /* print '-' sign if intger is neg */
			minus = 0;
		}
		_putchar(rev_i % 10 + '0');
		rev_i = rev_i / 10;
	}
}

/**
 * print_percent - prints a percentage sign
 * @args: arguments
 *
 * Return: Nothing
 */
void print_percent(va_list arg)
{
	(void) arg;
	_putchar('%');
}
