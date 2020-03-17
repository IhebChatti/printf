#include "holberton.h"
#include <stdarg.h>

/**
*rot13_format - prints the rot13'ed string
*@str: char to be written
*@args: argument
*
*Return: int
*/
int rot13_format(char **str __attribute__((unused)), va_list args)
{
	int i, rot, tmp = 0;
	char *s;
	char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM======nopqrstuvwxyzabcdefghijklm";

	s = va_arg(args, char *);
	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			tmp = s[i] - (65);
			rot += _write(arr[tmp]);
		}
		else
			rot += _write(s[i]);
	}
	return (rot);
}

/**
 * oct_format - prints the octal form of unsigned int
 * @str: the given string
 * @args: argument
 *
 * Return: pointer to string
 */
int oct_format(char **str, va_list args)
{
	int n = va_arg(args, int);
	int i;
	char *oct;

	if (n < 0)
		return (-1);
	oct = otoa(n);
	for (i = 0; oct[i]; i++)
	{
		**str = oct[i];
		(*str)++;
	}
	return (0);
}

/**
 * unsigned_format - prints the octal form of unsigned int
 * @str: the given string
 * @args: argument
 *
 * Return: pointer to string
 */
int unsigned_format(char **str, va_list args)
{
	int n = va_arg(args, int);
	int i;
	char *unsign;

	if (n < 0)
		n *= (-1);
	unsign = itoa(n);
	for (i = 0; unsign[i]; i++)
	{
		**str = unsign[i];
		(*str)++;
	}
	return (0);
}

int reverse_format(char **str, va_list args)
{
	char *s = va_arg(args, char *);
	int len = stringlen(s);
	int i;

	for (i = (len - 1); i >= 0; i--)
	{
		**str = s[i];
		(*str)++;
	}

	return (0);
}
