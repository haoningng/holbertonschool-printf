#include <stdarg.h>
#include "main.h"

/**
 * print_percent - prints a percentage sign
 * @arg: arguments
 *
 * Return: 1 i.e. one character
 */
int print_percent(va_list arg)
{
	(void) arg;
	_putchar('%');
	return (1);
}
