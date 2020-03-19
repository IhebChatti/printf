#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Include files */
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

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

/* the printf function */
int _printf(const char *, ...);

/* the write function */
int _write(char);

/* function wrapper */
int get_formater(char *, const char *, va_list);

/* Specifier function */
int percent_format(char **, va_list, char *);
int char_format(char **, va_list, char *);
int string_format(char **, va_list, char *);
int number_format(char **, va_list, char *);
int binary_format(char **, va_list, char *);
int oct_format(char **, va_list, char *);
int unsigned_format(char **, va_list, char *);
int reverse_format(char **, va_list, char *);
int hex_format(char **, va_list, char *);
int rot13_format(char **, va_list, char *);
int S_format(char **, va_list, char *);

/* Flags handler */
int plus_handler(char **, va_list);
/* Converter */
char *itoa(unsigned int);
char *btoa(unsigned int);
char *otoa(unsigned int);
char *htoa(unsigned int);
char *rot13(char *s);

/* Utilities and tool */
int intlen(int);
void array_rev(char *, int);
int stringlen(char *);

#endif /* HOLBERTON_H */
