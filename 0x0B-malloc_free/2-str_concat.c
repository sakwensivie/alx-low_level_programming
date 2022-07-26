#include"main.h"
/**
 * str_concat - concatenate string
 * @s1:  input as a string
 * @s2: input as a string
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	ptr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (k = 0; k <= j; k++)
	{
		*(ptr + i + k + 1) = *(s2 + j);
	}
	return (ptr);
}
