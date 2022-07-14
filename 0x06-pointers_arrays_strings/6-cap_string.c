#include"main.h"
/**
 * *cap_string - capitalises all words af a string
 * separated by the seaparators
 * @str: input as string
 * Return: string array
 */
char *cap_string(char *str)
{
	int i, j, k;
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep[j])
			{
				for (k = 0; lower[k] != '\0'; k++)
					if (str[i + 1] == lower[k])
					{
						str[i + 1] = upper[k];
					}
			}
		}
	}
	return (str);
}
