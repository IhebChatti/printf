#include "holberton.h"
/**
*S_format - handles S custom conversion specifier
*@str: the given string
*@args: argument
*
*Return: 0 with success
*/
int S_format(char **str, va_list args)
{
	char *s, *hx;
	int i = 0;
	int h;

	s = va_arg(args, char *);
	if (!s)
	{
		s = '\0';
		return (-1);
	}
	while (s[i])
	{
		h = s[i];
		if (s[i] < 32 || s[i] >= 127)
		{
			*(*str)++ = ('\\');
			*(*str)++ = ('x');
			*(*str)++ = ('0');
			hx = htoa(h);
			*(*str)++ = *hx;
			i++;
			continue;
		}
		**str = s[i];
		(*str)++;
		i++;
	}
	return (0);
}
