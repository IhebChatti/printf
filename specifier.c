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

void printstring(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	while (*s)
		_write(*s++);
}

void printchar(va_list args)
{
	_write(va_arg(args, int));
}

void printdecimal(va_list args)
{
	int n = va_arg(args, int);
	numbertobuf(n);
}
