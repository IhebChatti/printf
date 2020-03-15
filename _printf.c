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
	int i = 0, j = 0;
	int length = 0;
	int last_is_percent = 0;
	va_list args;
	char f;

	spec_t specs[] = {
		{"c", printchar},
		{"s", printstring},
		{"d", printdecimal},
		{"i", printdecimal},
		{NULL, NULL}
	};

	va_start(args, format);

	while((f = format[i]) != '\0')
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

#define S(V) (specs + j)->V

			while (S(c))
			{
				if (*S(c) == f)
					S(f)(args);
				last_is_percent *= 0;
				j++;
			}

#undef S

		}
		i++;
	}

	va_end(args);

	return (length);
}






