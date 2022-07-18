#include"main.h"
/**
 * _strchr - returns the first occurence of a char
 * @c: input as character
 * @s: input as a string
 * Return: a pointer to an array
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	while (1)
	{
		if (s[i] == c && s[i] != '\0')
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
