#include<stdio.h>
/**
 * main - prints the prime factors of a number
 *
 *
 * Return: always 0
 */
int main(void)
{
	long int n;
	int p;

	n = 612852475143;
	p = 2;

	do {
		if (n % p == 0)
		{
			/*printf("%d, ", p);*/
			n = n / p;
		}
		else
		{
			p++;
		}
	} while (n > p * p);
	printf("%ld\n", n);

	return (0);
}
