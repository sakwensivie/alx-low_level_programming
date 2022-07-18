#include"main.h"
/**
 * _strspn - string spin
 * @s: input as string
 * @accept: input as string
 * Return: an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (i - count);
}
