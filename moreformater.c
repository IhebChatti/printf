#include "holberton.h"

/**
*rot13_format - prints the rot13'ed string
*@str: char to be written
*@args: argument
*
*Return: int
*/
int rot13_format(char **str, va_list args)
{
	char *s;
	char *rot;
	int i;

	s = va_arg(args, char *);
	rot = rot13(s);
	for (i = 0; rot[i]; i++)
	{
		**str = rot[i];
		(*str)++;
	}
	return (0);
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

/**
 * reverse_format - print the string in reverse
 * @str: the given list
 * @args: arguments
 *
 * Return: 0 with success
 */
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
/**
 * hex_format - prints the hex format of string
 * @str: the given string
 * @args: argument
 *
 * Return: 0 with success
 */
int hex_format(char **str, va_list args)
{

	int n = va_arg(args, int);
	int i;
	char *hex;

	if (n < 0)
		return (-1);
	hex = htoa(n);
	for (i = 0; hex[i]; i++)
	{
		**str = hex[i];
		(*str)++;
	}
	return (0);
}

