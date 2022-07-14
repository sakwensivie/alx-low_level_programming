#include"main.h"
/**
 * _strcmp - to compare 2 strings
 * @s1: input as a string
 * @s2: input as a string
 * Return: 1 or -1 if not the same and 0 if the same
 */
int _strcmp(char *s1, char *s2)
{
	int i, flag;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			flag = 15;
			break;
		}
		else if (s1[i] < s2[i])
		{
			flag = -15;
			break;
		}
		else
			flag = 0;
	}
	return (flag);
}
