#include "main.h"
/**
 * print_most_numbers - prints most of the numbers
 *
 * Retrun: returns nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50)
		{
			continue;
		}
		else if (i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
		_putchar('\n');
}
