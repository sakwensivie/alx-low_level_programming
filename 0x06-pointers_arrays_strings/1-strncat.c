#include"main.h"
/**
 * *_strncat - concatenates a string
 * @dest: string array
 * @src: string array
 * @n: input as integer
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (1)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
