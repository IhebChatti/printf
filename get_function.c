#include "holberton.h"

#define SPECIFIERS spec_t specs[] = {	\
		{"c", char_format},	\
		{"s", string_format},	\
		{"%", percent_format},	\
		{"d", number_format},	\
		{"i", number_format},	\
		{"b", binary_format},	\
		{"u", unsigned_format},	\
		{"o", oct_format},	\
		{"x", hex_format},	\
		{"r", reverse_format},	\
		{"R", rot13_format},	\
		{"S", S_format},	\
		{"+", plus_handler},	\
		{NULL, NULL}		\
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
	char flag;

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
		while ((specs + i)->sp)
		{
			if (*format == '%')
				percent += 1;
			if (*format == '+')
			{
				flag = '+';
				format++;
			}
			if (*format == *(specs + i)->sp)
			{
				(specs + i)->f(&it, args, &flag);
				break;
			}
			i++;
		}
		if ((specs + i)->sp == NULL)
		{
			*it = '%';
			it++;
			*it++ = *format;
		}
		format++;
	}
	return (it - res);
}
