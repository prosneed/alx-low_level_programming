#include "main.h"
/**
 * _isdigit - checks if it is a digit or not
 * @c: parameter
 * Return: 1 if true 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
