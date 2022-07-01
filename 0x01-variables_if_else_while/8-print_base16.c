#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 always 0 (success/correct)
 */

int main(void)
{
	int i;
	char j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

