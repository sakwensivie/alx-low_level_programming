#include"main.h"
/**
 * _strlen_recursion - find the length of a string by recursion
 * @s: input a s string
 * Return: the length of the string as an integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
