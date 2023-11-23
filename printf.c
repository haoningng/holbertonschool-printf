#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/* Declare a struct array for different print format  */ 
print_type print_format[] = {
	{'c', print_char},
	{'s', print_string},
	{'i', print_int},
	{'d', print_int},
	{'%', print_percent},
	{'\0', NULL}
};

/**
 * _printf - produces output according to a format.
 * @format: string to be printed
 *
 * Return: length of the string i.e. format
 */
int _printf(const char *format, ...)
{
	int i, j, len, printed;
	va_list arg;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arg, format);
	i = len = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else if (format[i] == '%')
		{
			j = 0;
			while (print_format[j].type != '\0')
			{
				if (format[i + 1] == '\0')
				{
					va_end(arg);
					return (-1);
				}
				else if (print_format[j].type == format[i + 1])
				{
					printed = print_format[j].f(arg);
					len = len + printed;
					i++;
					break;
				}
				else if (format[i + 1] != 'c' && format[i + 1] != 's' && format[i + 1] != 'd' && format[i +  1] != 'i' && format[i + 1] != '%')
				{
					_putchar('%');
					len++;
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
