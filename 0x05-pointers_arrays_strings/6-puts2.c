#include "main.h"
/**
 * puts2 - prints every other character
 * @str: pointer to char
 * Return: returns nothing
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (str = "")
	{
		break;
	}
	else
	{
		_putchar(str[0]);
		for (j = 0; j <= i - 1; j++)
		{
		if (j != 0 && j % 2 == 0)
		{
			_putchar(str[j]);
		}
		}
	}
	_putchar('\n');
}
