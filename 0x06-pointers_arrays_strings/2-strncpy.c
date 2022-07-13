#include "main.h"
/**
 * _strncpy - copies string one from the other
 * @dest: pointer to char
 * @src: pointer to char
 * @n: size
 * Return: 0 if successful
 */

char *_strncpy(char *dest, char *src, int n)
{
		int i = 0, k = 0;

	while (n > k)
	{
		if (src[k] == '\0')
		{
			for (; k < n; k++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[k];
			k++;
			i++;
		}
	}

	return (dest);
}
