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
 *
 * Return: length of output
 */
int decimal_to_hexadecimal(unsigned int num)
{
	 int rem[8];
	 unsigned int i, m, sum;
	 int count;
	 
	 m = 268435456;
	 rem[0] = num / m;
	 for (i = 1; i < 8; i++)
	 {
		 m = m / 16;
		 rem[i] = (num / m) % 16;
	 }
	 for (i = 0; sum = 0, i < 8; i++)
	 {
		 sum = sum + rem[i];
		 if (sum || i == 7)
		 {
			 if (rem[i] < 10)
				 _putchar(rem[i] + '0');
			 else
				 _putchar(rem[i] + '0' + 'a' - ':');
		 }
		 count++;
	 }
	 return (count);
}
