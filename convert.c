#include "holberton.h"
#include <stdlib.h>
/**
 * itoa - convert integer to array
 * @n: the given number
 *
 * Return: a pointer to the null terminated string
 */
char *itoa(unsigned int n)
{
	int len = 0, i = 0;
	char *s;

	len = intlen(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	while (n / 10)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	s[i] = (n % 10) + '0';
	array_rev(s, len);
	s[i + 1] = '\0';
	return (s);
}

/**
 * btoa - convert integer to binary
 * @n: the given binary number
 *
 * Return: binary number
 */
char *btoa(unsigned int n)
{
	int i = 0;
	char *s;

	s = malloc(33);
	if (!s)
		return (NULL);
	for (i = 0; i < 33; i++)
		s[i] = '\0';
	i = 0;
	while (n / 2)
	{
		s[i] = (n % 2) + '0';
		i++;
		n /= 2;
	}
	s[i] = (n % 2) + '0';
	array_rev(s, stringlen(s));
	return (s);
}
