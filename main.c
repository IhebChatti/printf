#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Expected %c\n", 'a');
    printf("Expected %c\n", 'a');
    _printf("%i\n", 'a');
    printf("%i\n", 'a');
    _printf("%cc\n", 'z');
    printf("%cc\n", 'z');
    printf("%c\n", 53);
    printf("%c\n", 53);
    _printf("%c\n", '\0');
    printf("%c\n", '\0');
    _printf("%%%c\n", 't');
    printf("%%%c\n", 't');
    _printf("Expected %s\n", "holberton");
    printf("Expected %s\n", "holberton");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
