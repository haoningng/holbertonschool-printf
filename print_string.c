#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * print_string - function to print a string
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
