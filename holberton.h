#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * struct conversion_spec - Conversion specifire
 * @spec: specifier
 * @f: conversion function
 *
 * Description: a Conversion wrapper
 */
typedef struct spec
{
	char *c;
	void (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
void _write(char);
void string_conv(va_list);
void char_conv(va_list);
void decimal_conv(va_list);

#endif /* printf */
