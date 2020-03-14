#include "holberton.h"
#include <stdarg.h>
/**
*
*
*
*
*/
int _printf(const char *format, ...)
{
	int i;
	char *s;
	va_list args;

	va_start(args, format);
	for (i = 0; i < 10; i++)
	{
		if (format[i] != '%')
		{
			_write(format[i]);

		} 
	}
	_write('\n');
	va_end(args);
	return (0);
}

int main(void)
{
	_printf("holberton");
}
