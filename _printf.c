#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - prints the input on the shell buffer
 * @format: requested format
 *
 * Return: a length of the string outputed
 */
int _printf(const char *format, ...)
{
	int value;
	va_list args;
	char *result;

	result = malloc(1024);
	if (!result)
		return (0);

	va_start(args, format);
	value = get_formater(result, format, args);
	va_end(args);
	while (*result)
	{
		_write(*result);
		result++;
	}
	return (value);
}
