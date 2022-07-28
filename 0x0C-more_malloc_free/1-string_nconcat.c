#include"main.h"
/**
 * string_nconcat - concatenates a string
 * @s1: input as a string
 * @s2: input as a string
 * @n: input as an integer
 * Return: a pointer to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		n = j;
	ptr = malloc(sizeof(char) * (i + n + 1));
	
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		*(ptr + k) = *(s1 + k);
	for ( ; k < (i + n + 1); k++)
		*(ptr + k) = *(s2 + k - i);
	return (ptr);
}
