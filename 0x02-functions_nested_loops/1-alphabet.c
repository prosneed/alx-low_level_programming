#include "main.h"
/**
 * main - prints alphabet
 *
 * Return: 0 always 0 (success/correct)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		__putchar(i);
	}
	_putchar('\n');
	return (0);
}
