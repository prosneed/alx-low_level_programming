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
	va_list list;

	va_start(list, n);
	if (separator == NULL)
	{
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d%s", va_arg(list, int), separator);
		}
		va_end(list);
		printf("\n");
	}
}
