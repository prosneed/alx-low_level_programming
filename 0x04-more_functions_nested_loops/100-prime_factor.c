#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0 if successful
 */

int main(void)
{
	long int num = 612852475143;
	int i, j, largest;

	for (i = 1; i <= num / 2; i++)
	{
		int counter = 0;
		
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				counter = counter + 1;
			}
		}
		if (counter == 2)
		{
			largest = i;
		}
	}
	printf("%d\n", largest);
	return (0);
}
