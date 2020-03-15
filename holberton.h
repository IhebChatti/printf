#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * struct spec - Conversion specifire
 * @c: specifier
 * @f: conversion function
 *
 * Description: a Conversion wrapper
 */
typedef struct spec
{
	char *c;
	int (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
int _write(char);
int printstring(va_list);
int printchar(va_list);
int printdecimal(va_list);
void numbertobuf(int);

#endif /* printf */
