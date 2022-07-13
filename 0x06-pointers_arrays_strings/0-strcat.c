#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * Return: 0 successful
 */

char *_strcat(char *dest, char *src)
{
	int j, destlength, srclength, total_length;

	for (destlength = 0; dest[destlength] != '\0'; destlength++)
	{
	}
	for (srclength = 0; src[srclength] != '\0'; srclength++)
	{
	}

	total_length = destlength + srclength;

	for (j = 0; j < srclength; j++)
	{
		*(dest + (destlength + j)) = src[j];
	}
	dest[total_length] = '\0';

	return (dest);
}
