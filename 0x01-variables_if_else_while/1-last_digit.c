#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: 0 Always 0 (Success/Correct)
 */

/* betty style doc for function main goes there */

int main(void)

{
	int n, rem10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	rem10 = n % 10;
	if (rem10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rem10);
	}
	else if (rem10 == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, rem10);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem10);
	}
	return (0);

}
