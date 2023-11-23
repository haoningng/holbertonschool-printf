#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

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
