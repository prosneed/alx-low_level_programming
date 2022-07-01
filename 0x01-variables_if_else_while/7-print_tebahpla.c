#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 always 0 (success/correct)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
