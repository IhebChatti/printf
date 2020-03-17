#include "holberton.h"
#include <unistd.h>

/**
*_write - write to stdout
*@c: char to be written
*Return: 0 on SUCCESS
*/
int _write(char c)
{
	return (write(1, &c, 1));
}

/**
 * intlen - Determine the number of digit int integer
 * @num: the given number
 *
 * Return: the length of the integer
 */
int intlen(int num)
{
	int len = 0;

	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

/**
 * stringlen - determines the length of string
 * @str: the given string
 *
 * Return: an integer length
 */
int stringlen(char *str)
{
	int i = 0;

	while (str[i++])
		;
	return (i - 1);
}
/**
 * array_rev - reverse array
 * @arr: the given array
 * @len: the array length
 *
 * Return: void
 */
void array_rev(char *arr, int len)
{
	int i;
	char tmp;

	for (i = 0; i < (len / 2); i++)
	{
		tmp = arr[i];
		arr[i] = arr[(len - 1) - i];
		arr[(len - 1) - i] = tmp;
	}
}
