#include "main.h"

/**
 * * print_unsigned - function that prints an unsigned number
 * * @num: number to convert to unsigned int and print
 * *
 * * Return: number of digits printed
 * */

int print_unsigned(unsigned int num)
{
	unsigned int rem[10];
	unsigned int i, m, sum;
	int count = 0;

	m = 1000000000;
	for (i = 1; i < 10; i++)
	{
		m = m / 10;
		rem[i] = (num / m) % 10;
	}
	for (i = 0, sum = 0, count = 0; i < 10; i++)
	{
		sum = sum + rem[i];
		if (sum != 0 || i == 9)
		{
			_putchar(rem[i] + '0');
			count++;
		}
	}
	return (count);
}

/**
 * * _print_octal - convert int to octal
 * * @num: int ro convert
 * *
 * * Return: number of digit printed
 * */
int _print_octal(int num)
{
	int rem[10];
	int i, m, sum;
	int count = 0;

	m = 1073741824;
	rem[0] = num / m;
	for (i = 1; i < 11; i++)
	{
		m = m / 8;
		rem[i] = (num / m) % 8;
	}
	for (i = 0, sum = 0; i < 11; i++)
	{
		sum = sum + rem[i];
		if (sum != 0 || i == 10)
		{
			_putchar(rem[i] + '0');
			count++;
		}
	}
	return (count);
}

