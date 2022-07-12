#include "main.h"
/**
 * _strcpy - copy strings
 * @dest: pointer to char
 * @src: pointer to char
 * Return: 0 successful
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}
	for (i = 0; i <= length; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
