#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

#define SPEC spec_t specs[] = {\
		{"c", printchar},\
		{"s", printstring},\
		{"d", printdecimal},\
		{"i", printdecimal},\
		{NULL, NULL} \
	}

/**
 * _printf - printf
 * @format: the format
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, length = 0, last_is_percent = 0;
	va_list args;
	char f;

	SPEC;
	va_start(args, format);
	if (!format || (format[i] == '%' && !format[i + 1]) ||
	(format[i] == '%' && format[i + 1] == ' ' && !format[i + 2]))
		return (-1);
	while ((f = format[i]) != '\0')
	{
		if (f != '%' && !last_is_percent)
		{
			_write(f);
			length++;
		}
		if (f == '%' && !last_is_percent)
		{
			last_is_percent++;
			i++;
			continue;
		}
		if (f == '%' && last_is_percent)
		{
			_write('%');
			length++;
			last_is_percent *= 0;
		}
		if (f != '%' && last_is_percent)
		{
			j = 0;
			while ((specs + j)->c)
			{
				if (*(specs + j)->c == f)
					(specs + j)->f(args);
				last_is_percent *= 0;
				j++;
			}
		}
		i++;
	}
	va_end(args);
	return (length);
}
