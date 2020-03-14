#include "holberton.h"
#include <stdarg.h>

/**
 * _printf - printf
 * @format: the format
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
	

	va_start(args, format);

	while(format[i])
	{
		if (format[i] != '%')
		{
			_write(format[i]);
		}
		else
		{
			i++;
			switch (format[i])
			{
				case 'c':
					char_conv(args);
					break;
				case 's':
					string_conv(args);
					break;
				case 'd':
					decimal_conv(args);
					break;
			}
		}
		i++;
	}

	va_end(args);

	return (i);
}
