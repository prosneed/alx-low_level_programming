#include <stdio.h>
#include "main.h"
/**
 * print_array - prints array in the same order with comma and space
 * @a: pointer to int
 * @n: parameter int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	if (n == 1)
	{
		printf("%d", a[0]);
	}
	else if (n == 0 || n < 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[n - 1]);
	}
}
