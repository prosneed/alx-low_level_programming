#include "main.h"

#include <stdio.h>

/**
 * _abs - value absolut
 *@n: The int to print
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (0);
	}
}
