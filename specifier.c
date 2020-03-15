#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _write - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
/**
 * printstring - prints a string to stdout
 * @args: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printstring(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		return (-1);
	while (*s)
		_write(*s++);
	return (0);
}
/**
 * printchar - prints a char to stdout
 * @args: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printchar(va_list args)
{
	_write(va_arg(args, int));
	return (0);
}
/**
 * printdecimal - prints a decimal number to stdout
 * @args: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printdecimal(va_list args)
{
	int n = va_arg(args, int);

	numbertobuf(n);
	return(0);
}
