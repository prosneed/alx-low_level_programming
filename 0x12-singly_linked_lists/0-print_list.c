#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	register int len = 0;

	while (h)
	{
		if (!(h->str))
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar('\n');
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		len++;
	}
	return (len);
}
