#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: pointer to a char
 * Return: returns nothing
 */

void puts_half(char *str)
{
	int i, length;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	if (length % 2 == 0)
	{
		for (i = (length / 2); i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((length + 1) / 2); i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
