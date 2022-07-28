#include"main.h"
#include<string.h>

/**
 * check_if_digit - checks if a string contains digits only
 * @str: input as string
 * Return: 0 if false and 1 if true
 */
int check_if_digit(char *str)
{
	unsigned int i, j;
	int test;
	char digit[11] = "0123456789";

	for (i = 0; i < strlen(str); i++)
	{
		for (j = 0; j < strlen(digit); j++)
		{
			if (str[i] == digit[j])
			{
				test = 1;
				break;
			}
			else
			{
				test = 0;
			}
		}
	}
	return (test);
}

/**
 * main - entry point
 * @argc: command line argument count
 * @argv: command line arguments
 * Return: always 0 on success
 */

int main(int argc, char *argv[])
{
	long int num1, num2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(check_if_digit(argv[1])) || !(check_if_digit(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	ans = num1 * num2;

	printf("%ld\n", ans);
	return (0);
}
