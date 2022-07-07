#include "main.h"
/**
 * _isupper - checks if uppercase or not
 * @c: the character to be tracked
 * Return: 1 if upper or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
