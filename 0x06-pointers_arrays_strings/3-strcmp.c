#include"main.h"
/**
 * _strcmp - to compare 2 strings
 * @s1: input as a string
 * @s2: input as a string
 * Return: 1 or -1 if not the same and 0 if the same
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else
			return (0);
	}
}
