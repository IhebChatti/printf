#include <unistd.h>
#include <stdarg.h>
/**
*_write - write char to stdout
*@s: char to be printed
*@Return: 1 
*/
int _write(va_list s)
{
	return (write(1, &s, 1));
}