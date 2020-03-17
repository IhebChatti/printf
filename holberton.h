#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * struct specifier - a specifier struct
 * @sp: the character specifier
 * @f: the function required
 *
 * Description: a structure used to compare the input format flag
 */
typedef struct specifier
{
	char *sp;
	int (*f)(char **, va_list);
} spec_t;

int _printf(const char *, ...);
int get_formater(char *, const char *, va_list);
int _write(char);
int percent_format(char **, va_list);
int char_format(char **, va_list);
int string_format(char **, va_list);
int number_format(char **str, va_list);
char *itoa(unsigned int);
int intlen(int);
void array_rev(char *, int);
int rot13_format(char **str, va_list args);

#endif /* HOLBERTON_H */
