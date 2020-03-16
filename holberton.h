#include <stdarg.h>
#ifndef HOLBERTON
#define HOLBERTON

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

#endif
