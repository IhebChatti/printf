#include "holberton.h"
#include <unistd.h>

int _write(char c)
{
	return write(1, &c, 1);
}

int percent_format(char **str, va_list args)
{
	**str = '%';
	(*str)++;
	return (0);
}

int char_format(char **str, va_list args)
{
	char r = va_arg(args, int);
	if (!r)
		return (-1);
	**str = r;
	(*str)++;
	return (1);
}

int string_format(char **str, va_list args)
{
	char *s;
	int i = 0;

	s = va_arg(args, char *);
	if (s == NULL)
		return (-1);
	while(s[i])
	{
		**str = s[i];
		(*str)++;
		i++;
	}
	return (0);
}

