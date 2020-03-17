#include "holberton.h"
#include <unistd.h>
#include <string.h>

#define _NULL_ "(null)"

/**
* percent_format - percent handler
* @str: pointer to pointer type char
* @args: argument
* Return: 0 on SUCCESS
*/
int percent_format(char **str, va_list args __attribute__((unused)))
{
	**str = '%';
	(*str)++;
	return (0);
}
/**
* char_format - char handler
* @str: char to be written
* @args: argument
* Return: 1 on SUCCESS
* -1 on FAILURE
*/
int char_format(char **str, va_list args)
{
	char r = va_arg(args, int);

	if (!r)
		return (-1);
	**str = r;
	(*str)++;
	return (1);
}
/**
* string_format - string handler
* @str: string to be written
* @args: arguments
* Return: 0 on SUCCESS
* -1 on ERROR
*/
int string_format(char **str, va_list args)
{
	char *s;
	int i = 0;

	s = va_arg(args, char *);
	if (!s)
	{
		s = _NULL_;
		return (-1);
	}
	while (s[i])
	{
		**str = s[i];
		(*str)++;
		i++;
	}
	return (0);
}
/**
*number_format - function to handle decimals
*@str: a given string
*@args: arguments
*Return: 0 on SUCCESS
*/
int number_format(char **str, va_list args)
{
	int n = va_arg(args, int);
	int i;
	char *number;

	if (n < 0)
	{
		**str = '-';
		(*str)++;
		n *= (-1);
	}
	if (n == 0)
	{
		**str = '0';
		(*str)++;
		return (0);
	}
	number = itoa(n);
	for (i = 0; number[i]; i++)
	{
		**str = number[i];
		(*str)++;
	}
	return (0);
}

/**
 * binary_format - function to handle binary
 * @str: a given string
 * @args: arguments
 *
 * Return: 0 on success
 */
int binary_format(char **str, va_list args)
{
	unsigned int n = va_arg(args, int);
	int i;
	char *binary;

	binary = btoa(n);
	if (n == 0)
	{
		**str = '0';
		(*str)++;
		return (0);
	}
	for (i = 0; binary[i]; i++)
	{
		**str = binary[i];
		(*str)++;
	}
	return (0);
}
