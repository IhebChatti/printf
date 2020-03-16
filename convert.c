#include <unistd.h>
#include "holberton.h"
/**
*itoa - print an integer
*@n: int
*/
void itoa(int n)
{
	if (n / 10 != 0)
	{
		itoa(n / 10);
		if (n > 0)
		{
			_write((n % 10) + '0');
		}
		else
		{
			_write(-n % 10 + '0');
		}
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n > 0))
	{
		_write((n % 10) + '0');
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
	{
		_write('-');
		_write((-n % 10) + '0');
	}
	else if (n == 0)
		_write('0');
}
