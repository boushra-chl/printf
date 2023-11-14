#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * *
 * * Return: On success 1.
 * * On error, -1 is returned, and errno is set appropriately.
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_integer - function that converts an integer to
 * a string and prints it
 * @num: integer to convert
 * Return: number of characters printed
 */
int print_integer(int num)
{
	char s[32];
	int count = 0;

	sprintf(s, "%d", num);
	for (count = 0; s[count] != '\0'; count++)
		_putchar(s[count]);
	return (count);
}

/**
 * decimal_to_binary - function that converts a decimal to binary
 * @num: decimal number to convert
 *
 * Return: number of characters printed
 */

int decimal_to_binary(int num)
{
	unsigned int rem[32];
	unsigned int i, m, sum;
	int count = 0;

	m = 2147483648;
	rem[0] = num / m;

	for (i = 1; i < 32; i++)
	{
		m = m / 2;
		rem[i] = (num / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum = sum + rem[i];
		if (sum || i == 31)
		{
			_putchar('0' + rem[i]);
			count++;
		}
	}
	return (count);
}

