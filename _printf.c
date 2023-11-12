#include "main.h"
#include <stdio.h>

/**
 * _printf - user defined printf
 *
 * @format: reads format specifiers
 *
 * Return: always 0
 */

int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list ap;
	va_start(ap, format);
	
	while (*format)
	{
		if (*format == '%')
		{
			if (*++format == 'c')
			{
				printed_chars += putchar((char) va_arg(ap, int));
			}
			else if (*format == 's')
			{
				printed_chars += puts((char *) va_arg(ap, char *));
			}
			else if (*format == '%')
			{
				printed_chars += putchar('%');
			}
			else
			{
			}
		}
		
		else
		{
			printed_chars += putchar(*format++);
		}
	}
	
	va_end(ap);
	
	return printed_chars;
}

