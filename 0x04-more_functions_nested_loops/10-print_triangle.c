#include "main.h"
/**
 * print_triangle - prints triangle using hash sign
 * @size: parameter is being tracked
 *
 */

void print_triangle(int size)
{
	int i, j;
	int x;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(32);
			}
			for (x = 0; x < i; x++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
