#include <unistd.h>
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void string_conv(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	while (*s)
		_putchar(*s++);
}

void char_conv(va_list args)
{
	_putchar(va_arg(args, int));
}
/**
*print_number - print an integer
*@n: int
*/
void print_number(int n)
{
	if (n / 10 != 0)
	{
		print_number(n / 10);
		if (n > 0)
		{
			_putchar ((n % 10) + '0');
		}
		else
		{
			_putchar (-n % 10 + '0');
		}
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n > 0))
	{
		_putchar ((n % 10) + '0');
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
	{
		_putchar ('-');
		_putchar ((-n % 10) + '0');
	}
	else if (n == 0)
		_putchar ('0');
}
void decimal_conv(va_list args)
{
	int n = va_arg(args, int);
	print_number(n);
}
