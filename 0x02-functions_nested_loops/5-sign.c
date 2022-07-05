#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: contains value to be compared
 * Return: 1 if positive or 0 if zero or -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar('1');
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('0');

	}
	else
	{
		_putchar('-1');
		_putchar(',');
		_putchar(' ');
		_putchar('-');
		_putchar('1');
	}
}
