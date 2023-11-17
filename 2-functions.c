#include "main.h"

/**
 * print_unsigned - function that prints an unsigned number
 * @num: number to convert to unsigned int and print
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
int _print_octal(unsigned int num)
{
	int rem[11];
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
/**
 * decimal_to_hexadecimal - convert int to hex
 * @num: int to convert
 * @indice: 0 for lowercase and 1 for uppercase
 *
 * Return: length of output
 */
int decimal_to_hexadecimal(unsigned int num, int indice)
{
	int count = 0, i = 0;
	int rem[8];

	for (i = 7; i >= 0; i--)
	{
		rem[i] = num % 16;
		num = num / 16;
	}
	for (i = 0; i < 8; i++)
	{
	if (rem[i] < 10)
		_putchar(rem[i] + '0');
	else if (indice == 0)
		_print_hex(rem[i]);
	else if (indice == 1)
		_print_HEX(rem[i]);

	count++;
	}
	return (count);
}

/**
 * _print_hex- function that prints lowercase letters
 * @d: number to switch to letter
 *
 * Return: nothing
 */
void _print_hex(int d)
{
	if (d == 10)
		_putchar('a');
	else if (d == 11)
		_putchar('b');
	else if (d == 12)
		_putchar('c');
	else if (d == 13)
		_putchar('d');
	else if (d == 14)
		_putchar('e');
	else if (d == 15)
		_putchar('f');
}

/**
 * _print_HEX - function that prints uppercase letters
 * @d: number to switch to letter
 *
 * Return: nothing
 */
void _print_HEX(int d)
{
	if (d == 10)
		_putchar('A');
	else if (d == 11)
		_putchar('B');
	else if (d == 12)
		_putchar('C');
	else if (d == 13)
		_putchar('D');
	else if (d == 14)
		_putchar('E');
	else if (d == 15)
		_putchar('F');
}
/**
 * print_hexadecimal - conver int to hexadecimal
 * @num: the int to convert
 *
 * Return: num of output
 */
int print_hexadecimal(unsigned long num)
{
	int rem[8];
	unsigned long i, m, sum;
	int count;
	
	m = 4294967296;
	rem[0] = num / m;
	for (i = 1; i < 8; i++)
	{
		m = m / 16;
		rem[i] = (num / m) % 16;
	}
	for (i = 0, sum = 0; i < 8; i++)
	{
		sum = sum + rem[i];
		if (sum || i == 7)
		{
			if (rem[i] < 10)
				write(1, rem[i] + '0', 1);
			else
				write(1, rem[i] + '0' + 'a' - ':', 1);
		}
		count++;
	}
	return (count);
}
/**
 * print_pointer - print pointer address
 * @ptr: pointer address to print
 *
 * Return: number of output
 */
int print_pointer(void *ptr)
{
	unsigned long num = (unsigned long) ptr;
	int count = 0;
	
	count += write(1, "0x", 2);
	count += print_hexadecimal(num);
	return count;
}

