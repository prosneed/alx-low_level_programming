#include "main.h"
/**
 * _isalpha - checks if letter
 * @c: contains value to be compared
 * Return: 1 if letter and 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
