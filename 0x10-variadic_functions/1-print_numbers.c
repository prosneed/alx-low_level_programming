#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints the provided numbers
 * @separator: passes the numbers separator
 * @n: number of numbers
 * Return: returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(ls, int), (separator && i != n - 1) ? separator : "");
	}
	va_end(ls);
	printf("\n");
}
