#include"main.h"
/**
 * _strchr - returns the first occurence of a char
 * @c: input as character
 * @s: input as a string
 * Return: a pointer to an array
 */
char *_strchr(char *s, char c)
{
	int i;

	char *x;

	while (1)
	{
		if (s[i] == c)
		{
			x = s[i];
			break;
		}
		else if (s[i] == '\0')
		{
			x = NULL;
			break;
		}
		i++;
	}
	return (x);
}
