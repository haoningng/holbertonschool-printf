#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print_type - Struct print_type
 *
 * @type: the character representating different format type
 * @f: the function pointer to print different format type
 */
typedef struct print_type
{
	char type;
	int (*f)(va_list arg);
} print_type;

int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_int(va_list arg);
int print_decimal(va_list arg);
int _printf(const char *format, ...);

#endif
