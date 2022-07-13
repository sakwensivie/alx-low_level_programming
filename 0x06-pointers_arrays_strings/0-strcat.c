#include"main.h"
/**
 * *_strcat - concatenates 2 strings
 *
 * @dest: input as a string array
 * @src: input as a string array
 * Return: character array
 */
char *_strcat(char *dest, char *src)
{
	int count;
	char *tmp;

	count = 0;

	while (1)
	{
		if (dest[count] == '\0')
		{
			count++;
			break;
		}
		count++;
	}
	tmp = src;
	dest[count] = *tmp;

	return (dest);
}
