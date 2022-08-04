#include <stdio.h>
#include <stdarg.h>
/**
 *  sum_them_all - sums all the numbers
 *  @n: accepts the number of integers to sum
 *  Return: retuns the final result
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum = va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
