#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/*
 * print_strings - prints strings
 * @separator: separates the strings
 * @n: size of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		/*
		 *if (va_arg(ls, int *) == NULL)
		 *{
		 *	printf("%s%s", "nil", (separator && i != n - 1) ? separator : "");
		 *	continue;
		 *}
		 */
	printf("%s%s", va_arg(l, char *), (separator && i != n - 1) ? separator : "");
	}
	va_end(l);
	printf("\n");
}
