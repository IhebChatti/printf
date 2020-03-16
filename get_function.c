#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

#define SPECIFIERS spec_t specs[] = {		\
		{"c", char_format},		\
		{"s", string_format},		\
		{"%", percent_format},		\
		{NULL, NULL}			\
	}
/**
*get_formater - wrapper to get the function needed
*@res: pointer type char
*@format: const char
*@args: va_list
*Return: length of str
*/
int get_formater(char *res, const char *format, va_list args)
{
	char *it;
	int i, percent = 0;

	SPECIFIERS;
	if (format == NULL)
		return (0);
	it = res;
	while (*format)
	{
		if (*format != '%')
		{
			*it = *format;
			it++;
			format++;
			continue;
		}
		if (percent)
			*it = '%';
		format++;
		i = 0;
		while (*(specs + i)->sp)
		{
			if (*format == '%')
				percent += 1;
			if (*format == *(specs + i)->sp)
			{
				(specs + i)->f(&it, args);
				break;
			}
			i++;
		}
		format++;
	}
	return (it - res);
}
