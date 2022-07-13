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
	int count1, count2;

	count1 = count2 = 0;

	while (1)
	{
		if (dest[count1] == '\0')
		{
			break;
		}
		count1++;
	}
	while (1)
	{
		if (src[count2] == '\0')
		{
			break;
		}
		dest[count1] = src[count2];
		count1++;
		count2++;
	}

	return (dest);
}
