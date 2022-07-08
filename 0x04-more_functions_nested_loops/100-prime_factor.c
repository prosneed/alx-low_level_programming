/*
 * #include <stdio.h>
#include <stdlib.h>
**
 * main - entry point
 *
 * Return: 0 if successful
 *

int main(void)
{
	long int num = 612852475143;
	int i, j;
	long int largest;

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
	printf("%ld\n", largest);
	return (0);
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
