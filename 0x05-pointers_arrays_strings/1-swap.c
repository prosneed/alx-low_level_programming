#include "main.h"
/**
 * swap_int - swaps the value of two variables to one another
 * @a: tracks the pointer to an int
 * @b: tracks the pointer to an int
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

