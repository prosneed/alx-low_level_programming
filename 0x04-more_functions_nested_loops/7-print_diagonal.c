#include "main.h"
/**
 * print_diagonal - prints back slash diagonally
 *
 * @n: passed parameter
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
}
