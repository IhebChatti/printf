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
int number_format(char **, va_list);
int binary_format(char **, va_list);
int oct_format(char **, va_list);
int unsigned_format(char **, va_list);
int reverse_format(char **, va_list);
int hex_format(char **, va_list);
char *itoa(unsigned int);
char *btoa(unsigned int);
char *otoa(unsigned int);
char *htoa(unsigned int);
int intlen(int);
void array_rev(char *, int);
int stringlen(char *);
int rot13_format(char **, va_list);
#endif /* HOLBERTON_H */
