#include "main.h"
#include <stdio.h>

/**
 * print_integer - function that converts an integer to
 * a string and prints it
 * @num: integer to convert
 *
 * Return: number of characters printed
 */
int print_integer(int num)
{
	char s[32];
	int count = 0;

	sprintf(s, "%d", num);
	for (count = 0; s[count] != '\0'; count++)
	{
		_putchar(s[count]);
	}
	return (count);
}

