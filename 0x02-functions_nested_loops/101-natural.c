#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 success.
 */
int main(void)
{
	int i, ans;

	ans = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			ans += i;
		}
	}
	printf("%d\n", ans);
	return (0);
}
