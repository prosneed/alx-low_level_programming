#include "main.h"
/**
 * puts2 - prints every other character
 * @str: pointer to char
 * Return: returns nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

