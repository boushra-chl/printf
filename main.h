#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_integer(int num);
int decimal_to_binary(int num);
int print_unsigned(unsigned int num);
int _print_octal(unsigned int num);
int decimal_to_hexadecimal(unsigned int num, int indice);
void _print_hex(int d);
void _print_HEX(int d);
int print_hexadecimal(unsigned long num);
int print_pointer(void *ptr);

#endif
