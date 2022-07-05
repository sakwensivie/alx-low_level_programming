#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - prints to 98
 *
 * @n: input as integer
 *
 * Return: none
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else if (n == 98)
	{
		printf("98\n");
	}
}
