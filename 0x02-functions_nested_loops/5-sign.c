#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: contains value to be compared
 * Return: 1 always success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_puthcar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
