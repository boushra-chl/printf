#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to format
 * @format: character string
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed;
	char c;
	char *str
	int len = 0;

	va_start(args, format);
	while (format != '\0')
	{
		if (format != '%')
		{
			write(1, format, 1)
				printed++;
		}
		else
		{
			switch (*++format)
			{
				case 'c':
					c = va_arg(args, int);
					write(1, &c, 1)
						printed++;
					break;
				case 's':
					str = va_args(args, char *);
					while (str[len] != '\0')
						len++;
					write(1, str, len);
					printed++;
					break;
				case '%':
					write(1, format, 1);
					printed++;
				default:
					break;
			}
			format++;
		}
	}
	va_end(args);
	return (i);
}
