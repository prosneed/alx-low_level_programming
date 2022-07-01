#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always 0 (success/correct)
 */

int main(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		if (i == 'e')
		{
			continue;
		}
		else if (i == 'q')
		{
			continue;
		}
		putchar(i);

	}
	putchar('\n');
	return (0);
}
