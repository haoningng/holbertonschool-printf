#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: string to be printed
 *
 * Return: length of the string i.e. format
 */
int _printf(const char *format, ...)
{
	int i, j, len;
	va_list arg;

	/* Declare a struct array for different print format  */
	print_type print_format[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'%', print_percent},
		{'\0', NULL}
	};
	va_start(arg, format);
	i = 0;
	len = 0;
	/* Check if format is NULL and whether we have reached '\0' */
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%')
		{
			j = 0;
			/* Check if we have reached '\0' in print_format.type */
			while (print_format[j].type != '\0')
			{
				if (print_format[j].type == format[i + 1])
				{
					print_format[j].f(arg);
					len++;
					i++;
					break;
				}
				j++;
			}
		}
		i++;
	}
	va_end(arg);
	return (len);
}
