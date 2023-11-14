#include "main.h"
#include <stdio.h>

/**
 * * _putchar - writes the character c to stdout
 * * @c: The character to print
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
	int rem[10];
	int i = 0;
	int count = 0;

	while (num != 0)
	{
		rem[i] = num % 2;
		num = num / 2;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(rem[i] + '0');
		count++;
	}
	return (count);
}
