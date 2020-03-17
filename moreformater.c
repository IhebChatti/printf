#include "holberton.h"
/**
*rot13_format - prints the rot13'ed string
*@str: char to be written
*@args: argument
*
*Return: int
*/
int rot13_format(char **str __attribute__((unused)), va_list args)
{
	int i, rot, tmp = 0;
	char *s;
	char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM======nopqrstuvwxyzabcdefghijklm";

	s = va_arg(args, char *);
	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			tmp = s[i] - (65);
			rot += _write(arr[tmp]);
		}
		else
			rot += _write(s[i]);
	}
	return (rot);
}
