#include <stdio.h>
#include "main.h"
/**
 * _printf - function that produces output according to format
 * @format: character string
 * Return: number of characters printed or 0
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printed++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				char c = (char)va_arg(args, int);
				write(1, &c, 1);
				printed++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				while (*str)
				{
					write(1, str, 1);
					str++;
					printed++;
				}
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				printed++;
			}
		}
		format++;
	}
	va_end(args);
	return (printed);
}
