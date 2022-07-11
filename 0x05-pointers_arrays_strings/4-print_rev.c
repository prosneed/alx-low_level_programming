#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: pointer to a string
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int i = 0, length = 0, j;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
