#include "main.h"
/**
 * _strlen - displays the length of a string
 * @s: a string pointer to a char
 * Return: 0 if successful
 */

int _strlen(char *s)
{
	int i = 0, length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
