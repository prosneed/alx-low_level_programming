#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 alwas 0 (success/correct)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i == 57)
		{
			break;
		}
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
