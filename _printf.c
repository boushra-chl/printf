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
			else if (*format == 'd' || *format == 'i')
			{
				int n1 = (int)va_arg(args, int);
				printed = printed + print_integer(n1);
			}
			else if (*format == 'b')
			{
				int n2 = (int)va_arg(args, int);
				printed = printed + decimal_to_binary(n2);
			}
			else if (*format == 'u')
			{
				unsigned int nu = va_arg(args, unsigned int);
				printed = printed + print_unsigned(nu);
			}
			else if (*format == 'o')
			{
				int no = va_arg(args, int);
				printed = printed + _print_octal(no);
			}
		}
		format++;
	}
	va_end(args);
	return (printed);
}
