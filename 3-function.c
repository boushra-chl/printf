#include "main.h"
/**
 * _print_octal - convert int to octal
 * @num: int ro convert
 *
 * Return: number of digit printed
 */
int _print_octal(int num)
{
    int rem[10];
    int i, m, sum;
    int count = 0;

    m = 8;
    for (i = 1; i < 10; i++) {
        m = m / 8;
        rem[i] = (num / m) % 8;
    }

    for (i = 0, sum = 0, count = 0; i < 10; i++) {
        sum = sum + rem[i];
        if (sum != 0 || i == 9) {
            putchar(rem[i] + '0');
            count++;
        }
    }

    return count;
}

