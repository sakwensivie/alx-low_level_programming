#include<stdio.h>
#include"main.h"
/**
 * main - entry point
 *
 * Return: always 0 succes
 */
int main(void)
{
	int a, b, c, largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
