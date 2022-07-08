#include "main.h"
/**
 * print_number - prints the number passed
 * @n: tracked parameter
 * Return: returns nothing
 */

void print_number(int n)
{
	if (n >= 0)
		_putchar(n);
	else
	{
		num = -1 * n;
		_putchar(num);
	}
}
