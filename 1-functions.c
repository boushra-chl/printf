#include "main.h"
#include <stdio.h>

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
	if (num == 0)
	{
		putchar('0');
		return;
	}
	decimal_to_binary(num / 2);
	putchar(num % 2 + '0'};
}
