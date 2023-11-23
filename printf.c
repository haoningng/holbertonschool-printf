#include <stdarg.h>
#include <stddef.h>
#include "main.h"

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
		return (-1);
	va_start(arg, format);
	for (i = len = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++; }
		else if (format[i] == '%')
		{
			for (j = 0; print_format[j].type != '\0'; j++)
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
				else if (format[i + 1] != 'c' && format[i + 1] != 's' &&
						format[i + 1] != 'd' && format[i + 1] != 'i' && format[i + 1] != '%')
				{
					_putchar('%');
					len++;
					break;
				}
			}
		}
	}
	va_end(arg);
	return (len);
}
