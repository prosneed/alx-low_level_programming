#include <stdio.h>
#include <stdarg.h>
/**
 *  sum_them_all - sums all the numbers
 *  @n: accepts the number of integers to sum
 *  Return: retuns the final result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list list;

	va_start(list, n);
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	va_end(list);
	return (sum);
}
