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
int _write(char);
void printstring(va_list);
void printchar(va_list);
void printdecimal(va_list);
void numbertobuf(int);

#endif /* printf */
