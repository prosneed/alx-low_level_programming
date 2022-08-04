#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *  sum_them_all - sums all the numbers
 *  @n: accepts the number of integers to sum
 *  Return: retuns the final result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list list;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		int n = va_arg(list, unsigned int);

		sum += n;
	}
	va_end(list);
	return (sum);
}
