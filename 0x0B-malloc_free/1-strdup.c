#include"main.h"
/**
 * _strdup - copies a string
 * @str: input as a string
 * Return:  a pointer to the copy of  the string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc(sizeof(str));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sizeof(str); i++)
	{
		*(ptr + i) = *(str + i);
	}
	return (ptr);
}
