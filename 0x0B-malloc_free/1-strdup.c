#include"main.h"
/**
 * _strdup - copies a string
 * @str: input as a string
 * Return:  a pointer to the copy of  the string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; i != '\0'; i++)
		;
	ptr = (char *)malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		*(ptr + j) = *(str + j);
	}
	return (ptr);
}
