#include "holberton.h"
#include <unistd.h>
/**
*_write - write to stdout
*@c: char to be written
*Return: 0 on SUCCESS
*/
int _write(char c)
{
	return write(1, &c, 1);
}
/**
*percent_format - percent handler
*@str: pointer to pointer type char
*@args: argument
*Return: 0 on SUCCESS
*/
int percent_format(char **str, va_list args)
{
	**str = '%';
	(*str)++;
	return (0);
}
/**
*char_format - char handler
*@str: char to be written
*@args: argument
*Return: 1 on SUCCESS
*-1 on FAILURE
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
*string_format - string handler
*@str: string to be written
*@args: arguments
*Return: 0 on SUCCESS
*-1 on ERROR
*/
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
