#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - printf
 * @format: the format
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i = 0, j;
	va_list args;

	spec_t specs[] = {
		{"c", char_conv},
		{"s", string_conv},
		{"d", decimal_conv},
		{NULL, NULL}
	};

	va_start(args, format);

	while(format[i])
	{
		if (format[i] != '%')
		{
			_write(format[i]);
		}

		if (format[i - 1] == '%')
		{
			j = 0;
			while ((specs + j)->c)
			{
				if (*(specs + j)->c == format[i])
					(specs + j)->f(args);
				if (*(specs + j)->c == '%')
					_write('%');
				j++;
			}
		}
		i++;
	}

	va_end(args);

	return (i);
}
