#include"main.h"

/**
 * _strlen - returns the length of a string
 * @s: input as a character pointer
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	do {
		if ((*(s + count)) == '\0')
			break;
	} while (++count);

	return (count);
}
