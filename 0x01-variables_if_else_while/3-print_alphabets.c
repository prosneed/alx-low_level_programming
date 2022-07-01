#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 always 0 (success/correct)
 */
int main(void)
{
	char i, j;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
