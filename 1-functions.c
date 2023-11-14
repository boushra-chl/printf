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
	int rem[10];
	int i = 0;

	for (i = 0; i <= 10; i++)
		rem[i] = 0;
	i = 0;
	while (num != 0)
	{
		num = num / 2;
		rem[i] = num % 2;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
		_putchar(rem[i]);
	return (i);
}

